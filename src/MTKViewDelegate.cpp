#include <MetalKit/MetalKit.hpp>

#include "MTKViewDelegate.h"
#include "Renderer.h"

MTKViewDelegate::MTKViewDelegate( MTL::Device* pDevice )
: MTK::ViewDelegate()
, _pRenderer( new Renderer( pDevice ) )
{
}

MTKViewDelegate::~MTKViewDelegate()
{
    delete _pRenderer;
}

void MTKViewDelegate::drawInMTKView( MTK::View* pView )
{
    _pRenderer->draw( pView );
}
