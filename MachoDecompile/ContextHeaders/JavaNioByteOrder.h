// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOBYTEORDER_H
#define JAVANIOBYTEORDER_H


#import <Foundation/Foundation.h>


@interface JavaNioByteOrder : NSObject {
    BOOL needsSwap_;
    NSString *name_;
}




-(id)initWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)description;
-(void)dealloc;
+(BOOL)isLittleEndian;
+(id)nativeOrder;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif