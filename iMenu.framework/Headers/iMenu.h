//
//  iMenu.h
//  iMenu
//
//  Created by John Blaine on 11/26/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OMain.h"
#import "Progress.h"

//! Project version number for iMenu.
FOUNDATION_EXPORT double iMenuVersionNumber;

//! Project version string for iMenu.
FOUNDATION_EXPORT const unsigned char iMenuVersionString[];


NS_ASSUME_NONNULL_BEGIN

@interface iMenu : UIView

- (instancetype)initWithFrame:(CGRect)frame background:(UIColor*)b;
@property (nonatomic, retain) OMain *city;
@property (nonatomic, retain) OMain *shop;
@property (nonatomic, retain) OMain *menu;
@property (nonatomic, retain) Progress *progress;
@property BOOL showItemWithIcon;

- (BOOL) prev;

- (void)watch:(BOOL)b city:(void(^)(NSDictionary *b))ct shop:(void(^)(NSDictionary *c))sh menu:(void(^)(NSDictionary *a))lx;

@property (copy, nonatomic) void (^dataCB)(NSDictionary *v);
@property (copy, nonatomic) void (^cityCB)(NSDictionary *v);
@property (copy, nonatomic) void (^shopCB)(NSDictionary *v);

@end

NS_ASSUME_NONNULL_END
