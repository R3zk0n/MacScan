// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILFORMATTER_CACHEDDECIMALFORMAT_H
#define JAVAUTILFORMATTER_CACHEDDECIMALFORMAT_H


#import <Foundation/Foundation.h>

#import "LibcoreIcuNativeDecimalFormat.h"
#import "LibcoreIcuLocaleData.h"

@interface JavaUtilFormatter_CachedDecimalFormat : NSObject {
    LibcoreIcuNativeDecimalFormat *decimalFormat_;
    LibcoreIcuLocaleData *currentLocaleData_;
    NSString *currentPattern_;
}




-(id)init;
-(id)updateWithLibcoreIcuLocaleData:(id)arg0 withNSString:(id)arg1 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif