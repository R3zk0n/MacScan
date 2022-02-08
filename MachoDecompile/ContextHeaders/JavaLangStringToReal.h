// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGSTRINGTOREAL_H
#define JAVALANGSTRINGTOREAL_H


#import <Foundation/Foundation.h>


@interface JavaLangStringToReal : NSObject



-(id)init;
+(CGFloat)parseDblImplWithNSString:(id)arg0 withInt:(int)arg1 ;
+(float)parseFltImplWithNSString:(id)arg0 withInt:(int)arg1 ;
+(id)invalidRealWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
+(id)initialParseWithNSString:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
+(float)parseNameWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
+(CGFloat)parseDoubleWithNSString:(id)arg0 ;
+(float)parseFloatWithNSString:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif