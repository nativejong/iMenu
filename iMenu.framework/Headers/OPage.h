//
//  OPage.h
//  Quantum
//
//  Created by John Blaine on 5/21/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OPageCell.h"

NS_ASSUME_NONNULL_BEGIN

@protocol OPageProto <NSObject>
@required
- (void) pageProto:(NSMutableDictionary*)i;
@end

@interface OPage : UIView

@property (nonatomic, retain) UIImageView *img;

@property (nonatomic, retain) UIButton *title;
@property (nonatomic, retain) UIButton *dscr;

@property (nonatomic, retain) UIButton *name;

@property (nonatomic, strong) NSMutableDictionary *myData;
@property (nonatomic, strong) UIColor *bgColor;

@property (nonatomic, weak) id<OPageProto> proto;

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c zell:(Boolean)z;
- (void)loadMenu:(NSMutableDictionary*) gr;

- (void) putName:(NSString*)s;
- (void) putDscr:(NSString*)s;
- (void) putImage:(NSString*)s;

- (void) fadeIt;
- (void) shrink;
- (void) flip;


@end

NS_ASSUME_NONNULL_END
