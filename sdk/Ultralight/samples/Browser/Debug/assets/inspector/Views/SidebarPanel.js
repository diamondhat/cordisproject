/*
 * Copyright (C) 2013, 2015 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

WebInspector.SidebarPanel = class SidebarPanel extends WebInspector.View
{
    constructor(identifier, displayName)
    {
        super();

        this._identifier = identifier;
        this._displayName = displayName;
        this._selected = false;

        this._savedScrollPosition = 0;

        this.element.classList.add("panel", identifier);

        this.element.setAttribute("role", "group");
        this.element.setAttribute("aria-label", displayName);

        this._contentView = new WebInspector.View;
        this._contentView.element.classList.add("content");
        this.addSubview(this._contentView);
    }

    // Public

    get identifier()
    {
        return this._identifier;
    }

    get contentView()
    {
        return this._contentView;
    }

    get displayName()
    {
        return this._displayName;
    }

    get visible()
    {
        return this.selected && this.parentSidebar && !this.parentSidebar.collapsed;
    }

    get selected()
    {
        return this._selected;
    }

    set selected(flag)
    {
        if (flag === this._selected)
            return;

        this._selected = flag || false;
        this.element.classList.toggle("selected", this._selected);
    }

    get parentSidebar()
    {
        return this.parentView;
    }

    get minimumWidth()
    {
        // Implemented by subclasses.
        return 0;
    }

    show()
    {
        if (!this.parentSidebar)
            return;

        this.parentSidebar.collapsed = false;
        this.parentSidebar.selectedSidebarPanel = this;
    }

    hide()
    {
        if (!this.parentSidebar)
            return;

        this.parentSidebar.collapsed = true;
        this.parentSidebar.selectedSidebarPanel = null;
    }

    added()
    {
        console.assert(this.parentSidebar);

        // Implemented by subclasses.
    }

    removed()
    {
        console.assert(!this.parentSidebar);

        // Implemented by subclasses.
    }

    shown()
    {
        this._contentView.element.scrollTop = this._savedScrollPosition;

        // FIXME: remove once <https://webkit.org/b/150741> is fixed.
        this.updateLayoutIfNeeded();

        // Implemented by subclasses.
    }

    hidden()
    {
        this._savedScrollPosition = this._contentView.element.scrollTop;

        // Implemented by subclasses.
    }

    visibilityDidChange()
    {
        // Implemented by subclasses.
    }
};
