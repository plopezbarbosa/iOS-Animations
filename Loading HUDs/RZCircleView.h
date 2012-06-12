//
//  RZCircleView.h
//  Raizlabs
//
//  Created by Nick Donaldson on 5/22/12.
//  Copyright (c) 2012 Raizlabs Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RZCircleLayer.h"

@interface RZCircleView : UIView

@property (assign, nonatomic) CGFloat radius;
@property (strong, nonatomic) UIColor *color;

- (id)initWithRadius:(CGFloat)radius color:(UIColor*)color;
- (void)animateToRadius:(CGFloat)radius 
              withCurve:(CAMediaTimingFunction *)curve 
               duration:(CFTimeInterval)duration
             completion:(void (^)())completion;

- (void)setBorderWidth:(CGFloat)borderWidth;
- (void)setBorderColor:(UIColor *)borderColor;
- (RZCircleLayer*)circleLayer;

@end