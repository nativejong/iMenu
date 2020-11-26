//
//  Panda.h
//  Panda
//
//  Created by Wiphu Jong Blaine on 10/6/20.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OMain.h"
#import "Progress.h"
#import "Archive.h"

//! Project version number for Panda.
FOUNDATION_EXPORT double PandaVersionNumber;
FOUNDATION_EXPORT const unsigned char PandaVersionString[];

NS_ASSUME_NONNULL_BEGIN

@interface Panda : UIView

- (instancetype)initWithFrame:(CGRect)frame background:(UIColor*)b;

@property (nonatomic, retain) Archive *archive;
@property (nonatomic, retain) OMain *city;
@property (nonatomic, retain) OMain *shop;
@property (nonatomic, retain) OMain *menu;
@property (nonatomic, retain) Progress *progress;
@property BOOL showItemWithIcon;

- (void) prev;

- (void)watch:(BOOL)b city:(void(^)(NSDictionary *b))ct shop:(void(^)(NSDictionary *c))sh menu:(void(^)(NSDictionary *a))lx;

@property (copy, nonatomic) void (^dataCB)(NSDictionary *v);
@property (copy, nonatomic) void (^cityCB)(NSDictionary *v);
@property (copy, nonatomic) void (^shopCB)(NSDictionary *v);

@end

NS_ASSUME_NONNULL_END
