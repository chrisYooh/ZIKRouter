//
//  ZIKTimeServiceInput.h
//  ZIKRouterDemo
//
//  Created by zuik on 2017/8/9.
//  Copyright © 2017 zuik. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ZIKRouter/ZIKServiceRoutable.h>

@protocol ZIKTimeServiceInput <ZIKServiceRoutable>
- (NSString *)currentTimeString;
@end

@protocol EasyTimeServiceInput1 <ZIKServiceRoutable>
- (NSString *)currentTimeString;
@end

@protocol EasyTimeServiceInput2 <ZIKServiceRoutable>
- (NSString *)currentTimeString;
@end

@protocol EasyTimeServiceInput3 <ZIKServiceRoutable>
- (NSString *)currentTimeString;
@end
