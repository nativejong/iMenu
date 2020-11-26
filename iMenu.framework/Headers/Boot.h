//
//  Boot.h
//  Test
//
//  Created by John Blaine on 10/24/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Boot : NSObject
- (NSDictionary*) menuCfg;
- (NSDictionary*) shopCfg;
- (NSDictionary*) cityCfg;

- (void)getJS:(NSString *)pth  local:(void (^)(NSArray* rv))clocal;
- (void)pullJS:(NSString*)u item:(void (^)(NSArray* rv))cblock;

- (NSString*) br:(NSString*)b;


@end

NS_ASSUME_NONNULL_END
