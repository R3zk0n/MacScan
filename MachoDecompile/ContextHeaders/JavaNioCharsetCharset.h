// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHARSETCHARSET_H
#define JAVANIOCHARSETCHARSET_H


#import <Foundation/Foundation.h>

#import "JavaUtilHashSet.h"
#import "JavaLangComparable-Protocol.h"

@interface JavaNioCharsetCharset : NSObject <JavaLangComparable>

 {
    NSString *canonicalName_;
    JavaUtilHashSet *aliasesSet_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withNSStringArray:(id)arg1 ;
-(BOOL)containsWithJavaNioCharsetCharset:(id)arg0 ;
-(id)newEncoder;
-(id)newDecoder;
-(id)name;
-(id)aliases;
-(id)displayName;
-(id)displayNameWithJavaUtilLocale:(id)arg0 ;
-(BOOL)isRegistered;
-(BOOL)canEncode;
-(id)encodeWithJavaNioCharBuffer:(id)arg0 ;
-(id)encodeWithNSString:(id)arg0 ;
-(id)decodeWithJavaNioByteBuffer:(id)arg0 ;
-(int)compareToWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(void)checkCharsetNameWithNSString:(id)arg0 ;
+(BOOL)isValidCharsetNameCharacterWithChar:(unsigned short)arg0 ;
+(id)availableCharsets;
+(id)cacheCharsetWithNSString:(id)arg0 withJavaNioCharsetCharset:(id)arg1 ;
+(id)forNameWithNSString:(id)arg0 ;
+(id)forNameUEEWithNSString:(id)arg0 ;
+(BOOL)isSupportedWithNSString:(id)arg0 ;
+(id)defaultCharset;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif