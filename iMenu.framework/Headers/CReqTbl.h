//
//  CReqTbl.h
//  Quantum
//
//  Created by John Blaine on 4/30/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CReqTbl : UIView <UITableViewDataSource, UITableViewDelegate>
    @property (nonatomic, retain) UITextField *title;

    @property (strong, nonatomic) UIView *tblFrame;
    @property (strong, nonatomic) UITableView *tbl;
    @property (nonatomic, retain) UIButton *prev;
    @property (nonatomic, retain) UIButton *next;

    @property (strong, nonatomic) NSMutableArray *myFreebie;
    @property (strong, nonatomic) NSMutableArray *myData;
    @property (strong, nonatomic) NSMutableArray *displayData;
    @property NSInteger idx;
    @property (nonatomic, strong) UIColor *bgColor;

    - (void)taskWithName:(NSInteger)name prev:(void(^)(NSInteger))cprev  next:(void(^)(NSInteger))cnext;
    @property (copy, nonatomic) void (^nextCB)(NSInteger i);
    @property (copy, nonatomic) void (^prevCB)(NSInteger i);

    - (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;
    - (void)refresh;
    - (void)refresh:(NSInteger) i;
    - (void)clear;
    - (NSString*)getReq;
    - (NSString*)getReqEx;

    - (void)setIt:(NSString*)nm def:(NSString*)d list:(NSString*)lst sel:(NSString*)s;

- (void)setFreebie:(NSString*)nm def:(NSString*)d list:(NSString*)lst sel:(NSString*)s;

    - (void) loadItem:(NSInteger) ix;

@end

NS_ASSUME_NONNULL_END
