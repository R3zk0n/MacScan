// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTFORMAT_H
#define JAVATEXTFORMAT_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@interface JavaTextFormat : NSObject <JavaIoSerializable, NSCopying>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)clone;
-(id)formatWithId:(id)arg0 ;
-(id)formatWithId:(id)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)formatToCharacterIteratorWithId:(id)arg0 ;
-(id)parseObjectWithNSString:(id)arg0 ;
-(id)parseObjectWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(BOOL)upToWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 withJavaLangStringBuffer:(id)arg2 withChar:(unsigned short)arg3 ;
+(BOOL)upToWithQuotesWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 withJavaLangStringBuffer:(id)arg2 withChar:(unsigned short)arg3 withChar:(unsigned short)arg4 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif