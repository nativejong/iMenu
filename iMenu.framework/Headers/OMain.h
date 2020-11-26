//
//  OMain.h
//  Quantum
//
//  Created by John Blaine on 5/10/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OMenu.h"
#import "CReq.h"
#import "CNotify.h"

NS_ASSUME_NONNULL_BEGIN
@protocol ZMenuProto <NSObject>
@required

- (void) zenuFBaseProto:(NSMutableDictionary*)i image:(UIImage*) im;
- (void) zenuReqProto:(NSMutableDictionary*)i src:(NSString*)r;
@end

@interface OMain : UIView<OMenuProto>

@property (nonatomic, strong) OMenu *cMenu;
@property (nonatomic, strong) CReq *cReq;
@property (nonatomic, retain) CNotify *msg;
@property (nonatomic, weak) id<ZMenuProto> proto;
@property Boolean edit;


- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c col:(NSInteger)z showMenu:(Boolean)b;

- (void)setIt:(NSMutableDictionary*)r;
- (void)refresh;
- (void)clear;
- (void)reset;


- (void)watch:(void(^)(NSDictionary *list))lx;
@property (copy, nonatomic) void (^dataCB)(NSDictionary *list);

@end

NS_ASSUME_NONNULL_END
