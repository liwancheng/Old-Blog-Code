//
//  GLViewController.h
//  Part6Project
//
//  Created by jeff on 5/31/09.
//  Copyright Jeff LaMarche 2009. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

#define USE_CUSTOM_MATRICES 1
#define USE_SHEAR_TRANSFORM 1

@class GLView;
@interface GLViewController : UIViewController {
}
- (void)drawView:(GLView*)view;
- (void)setupView:(GLView*)view;

@end
