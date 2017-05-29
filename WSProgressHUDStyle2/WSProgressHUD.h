//
//  ProgressAnimation2.h
//  AppleProgressHUD
//
//  Created by Dotsquares on 7/11/16.
//  Copyright © 2016 Dotsquares. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIViewController+WSProgressHUDStyleIOS.h"
#import "UIImageView+WSProgressHUDImageLoaderStyleIOS.h"`

@interface WSProgressHUD : UIView
{
    float updateValue;
    float updateValue2;
    
    NSTimer *timer;
}

+(instancetype)sharedInstance;
-(void)initWithTimerValue;
-(void)removeProgressHUD;

@end
