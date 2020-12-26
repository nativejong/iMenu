//
//  NGetJS.h
//  iMenu
//
//  Created by John Blaine on 11/28/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>

//NS_ASSUME_NONNULL_BEGIN
//
//@interface NGetJS : NSObject
//
//@end
//
//NS_ASSUME_NONNULL_END
@interface NGetJS : NSObject
- (NSDictionary*) menuCfg;
- (NSDictionary*) shopCfg;
- (NSDictionary*) cityCfg;

- (void)getJS:(NSString *)pth  local:(void (^)(NSArray* rv))clocal;
//- (void)pullJS:(NSString*)u item:(void (^)(NSArray* rv))cblock;
- (void)readJS:(NSString*)u fDate:(nullable NSString*)fd item:(void (^)(NSArray *rv))cblock;

- (NSString*) br:(NSString*)b;


@end
