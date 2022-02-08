// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILZIPCRC32_H
#define JAVAUTILZIPCRC32_H


#import <Foundation/Foundation.h>

#import "JavaUtilZipChecksum-Protocol.h"

@interface JavaUtilZipCRC32 : NSObject <JavaUtilZipChecksum>

 {
    NSInteger tbytes_;
    NSInteger crc_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(NSInteger)getValue;
-(void)reset;
-(void)updateWithInt:(int)arg0 ;
-(void)updateWithByteArray:(id)arg0 ;
-(void)updateWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(NSInteger)updateImplWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(NSInteger)updateByteImplWithByte:(char)arg0 withLong:(NSInteger)arg1 ;
-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif