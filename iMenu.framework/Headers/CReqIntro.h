//
//  CReqIntro.h
//  Quantum
//
//  Created by John Blaine on 4/30/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "CPhoto.h"

NS_ASSUME_NONNULL_BEGIN

@interface CReqIntro : UIView

   @property (nonatomic, retain) UIImageView *photo;

    @property (nonatomic, retain) UIButton *link;
    @property (nonatomic, retain) UIButton *title;
    @property (nonatomic, retain) UITextView *dscr;
    @property (nonatomic, retain) UIButton *prev;
    @property (nonatomic, retain) UIButton *ok;
    @property (nonatomic, retain) UIButton *next;
    @property (nonatomic, retain) UIButton *noimg;
    @property (nonatomic, retain) UIButton *price;

    - (void)taskWithName:(NSInteger)name prev:(void(^)(NSInteger))cprev  next:(void(^)(NSInteger))cnext  ok:(void(^)(NSInteger))cok;
    @property (copy, nonatomic) void (^nextCB)(NSInteger i);
    @property (copy, nonatomic) void (^prevCB)(NSInteger i);
    @property (copy, nonatomic) void (^okCB)(NSInteger i);

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;
- (void) showOnly:(Boolean)b;

@end

NS_ASSUME_NONNULL_END
