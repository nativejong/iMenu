//
//  Count.h
//  Test
//
//  Created by John Blaine on 11/2/20.
//

#import <Foundation/Foundation.h>
#import "Text.h"
#import "Filter.h"
#import "Boot.h"

NS_ASSUME_NONNULL_BEGIN

@interface Count : NSObject

@property (nonatomic, retain) Boot *boot;

- (void) archiveAll;

@end

NS_ASSUME_NONNULL_END
