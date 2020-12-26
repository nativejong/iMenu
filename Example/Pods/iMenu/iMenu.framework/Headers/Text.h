//
//  Text.h
//  Panda
//
//  Created by Wiphu Jong Blaine on 10/7/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Text : NSObject


-(NSArray*)findPosition:(NSString*)s match:(NSString*)m;

-(NSInteger)findText:(NSString*)s match:(NSString*)m position:(NSUInteger)p;
-(NSString*)fetchText:(NSString*)s from:(NSString*)f to:(NSString*)t position:(NSUInteger)p;
-(NSString*)fetchLast:(NSString*)s seperator:(NSString*)m;
-(NSString*)textUntil:(NSString*)s to:(char)c;


@end

NS_ASSUME_NONNULL_END
