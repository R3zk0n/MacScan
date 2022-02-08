// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGBOOLEAN_H
#define JAVALANGBOOLEAN_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"
#import "JavaLangComparable-Protocol.h"

@interface JavaLangBoolean : NSObject <JavaIoSerializable, JavaLangComparable>

 {
    BOOL value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 ;
-(id)initWithBoolean:(BOOL)arg0 ;
-(BOOL)booleanValue;
-(BOOL)isEqual:(id)arg0 ;
-(int)compareToWithId:(id)arg0 ;
+(int)compareWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 ;
+(BOOL)getBooleanWithNSString:(id)arg0 ;
+(BOOL)parseBooleanWithNSString:(id)arg0 ;
+(id)toStringWithBoolean:(BOOL)arg0 ;
+(id)valueOfWithNSString:(id)arg0 ;
+(id)valueOfWithBoolean:(BOOL)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif