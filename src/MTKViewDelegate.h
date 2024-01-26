#pragma once

#include "Renderer.h"

class MTKViewDelegate : public MTK::ViewDelegate
{
    public:
        MTKViewDelegate( MTL::Device* pDevice );
        virtual ~MTKViewDelegate() override;
        virtual void drawInMTKView( MTK::View* pView ) override;

    private:
        Renderer* _pRenderer;
};
