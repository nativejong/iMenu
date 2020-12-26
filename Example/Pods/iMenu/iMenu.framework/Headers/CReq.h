//
//  CReq.h
//  Quantum
//
//  Created by John Blaine on 4/30/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CReqTbl.h"
#import "CReqIntro.h"
#import "CReqComment.h"
#import "CReqAlert.h"

NS_ASSUME_NONNULL_BEGIN

@interface CReq : UIView
    @property (nonatomic, retain) CReqTbl *reqTbl;
    @property (nonatomic, retain) CReqIntro *reqIntro;
    @property (nonatomic, retain) CReqComment *reqComment;
    @property (nonatomic, retain) CReqAlert *alert;

    @property (nonatomic, retain) NSMutableDictionary *currentItem;

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;

- (void) addTitle:(NSString*) t;
- (void) addDscr:(NSString*) t;
- (void) addPrice:(NSString*) t;

- (void)reset;

- (void) addItem:(NSMutableDictionary*) t;
- (void) addLink:(Boolean) t;
- (void) setVisible:(Boolean)b;


- (void)reqWithName:(NSInteger)i prev:(void(^)(NSInteger))p  next:(void(^)( NSString *src, NSMutableDictionary *i, NSString *r, NSString *c))cnext;

@property (copy, nonatomic) void (^prevCB)(NSInteger i);


@property (copy, nonatomic) void (^nextCB)( NSString *src, NSMutableDictionary *i, NSString *r, NSString *c);

@end

NS_ASSUME_NONNULL_END
