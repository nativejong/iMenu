//
//  Archive.h
//  Test
//
//  Created by John Blaine on 10/14/20.
//

#import <Foundation/Foundation.h>
#import "Text.h"
#import "Filter.h"
#import "Boot.h"

NS_ASSUME_NONNULL_BEGIN

@interface Archive : NSObject

@property (nonatomic, retain) Boot *boot;

- (void) archiveCity:(NSDictionary*)dx cback:(void(^)(NSString *data))cb;
- (void) archiveAll;

@end

NS_ASSUME_NONNULL_END
