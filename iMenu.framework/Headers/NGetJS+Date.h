//
//  NGetJS+Date.h
//  iMenu
//
//  Created by John Blaine on 11/28/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import "NGetJS.h"

NS_ASSUME_NONNULL_BEGIN

//@interface NGetJS (Date)
//
//@end
@interface NGetJS (Date)

- (NSString *) getFDate:(NSString*)fn;
- (NSDate*) textToDate:(NSString*) data;
- (void) ModDate:(NSString*) fname  newdate:(NSString*)d;
- (BOOL) isFileUpToDate:(NSString*)fn newdate:(NSString*)dx;


@end

NS_ASSUME_NONNULL_END
