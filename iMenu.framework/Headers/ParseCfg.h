//
//  ParseCfg.h
//  Test
//
//  Created by John Blaine on 10/11/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ParseCfg : NSObject


- (void)watch:(void(^)(NSDictionary *shop, NSDictionary *menu, NSDictionary *host, NSDictionary *list))lx;


@property (copy, nonatomic) void (^dataCB)(NSDictionary *shop, NSDictionary *menu, NSDictionary *host, NSDictionary *list);

@end

NS_ASSUME_NONNULL_END
