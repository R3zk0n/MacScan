// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGENUM_H
#define JAVALANGENUM_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"
#import "JavaLangComparable-Protocol.h"

@interface JavaLangEnum : NSObject <JavaIoSerializable, JavaLangComparable>

 {
    NSString *name_;
    int ordinal_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withInt:(int)arg1 ;
-(id)name;
-(int)ordinal;
-(BOOL)isEqual:(id)arg0 ;
-(id)clone;
-(int)compareToWithId:(id)arg0 ;
-(id)getDeclaringClass;
-(void)dealloc;
-(id)retain;
-(void)release;
-(id)autorelease;
+(id)valueOfWithIOSClass:(id)arg0 withNSString:(id)arg1 ;
+(id)getSharedConstantsWithIOSClass:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif