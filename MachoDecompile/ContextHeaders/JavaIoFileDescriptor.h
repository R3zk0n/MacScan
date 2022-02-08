// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOFILEDESCRIPTOR_H
#define JAVAIOFILEDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface JavaIoFileDescriptor : NSObject {
    int descriptor_;
}




-(id)init;
-(void)sync;
-(BOOL)valid;
-(int)getInt$;
-(void)setInt$WithInt:(int)arg0 ;
-(id)description;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif