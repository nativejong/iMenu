//
//  Spider.h
//  Test
//
//  Created by John Blaine on 10/23/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Spider : NSObject

@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSMutableArray *data;
@property (nonatomic, retain) NSMutableDictionary *parse;


@end

NS_ASSUME_NONNULL_END
