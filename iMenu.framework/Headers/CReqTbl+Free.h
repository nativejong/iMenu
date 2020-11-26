//
//  CReqTbl+Free.h
//  Quantum
//
//  Created by John Blaine on 8/22/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import "CReqTbl.h"

NS_ASSUME_NONNULL_BEGIN

@interface CReqTbl (Free)

- (void)addFreebie:(NSMutableDictionary*)r;

- (void)removeIt:(NSMutableDictionary*)r;;

- (NSMutableDictionary*)assembleFree:(NSMutableDictionary*)r;

@end

NS_ASSUME_NONNULL_END
