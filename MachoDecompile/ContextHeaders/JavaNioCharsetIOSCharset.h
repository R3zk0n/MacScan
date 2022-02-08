// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHARSETIOSCHARSET_H
#define JAVANIOCHARSETIOSCHARSET_H



#import "JavaNioCharsetCharset.h"

@interface JavaNioCharsetIOSCharset : JavaNioCharsetCharset {
    NSInteger nsEncoding_;
    float charBytes_;
}




-(id)initWithLong:(NSInteger)arg0 withNSString:(id)arg1 withNSStringArray:(id)arg2 withFloat:(float)arg3 ;
-(NSInteger)nsEncoding;
-(BOOL)containsWithJavaNioCharsetCharset:(id)arg0 ;
-(id)newEncoder;
-(id)newDecoder;
+(id)getAvailableCharsetNames;
+(id)charsetForNameWithNSString:(id)arg0 ;
+(id)getDefaultCharset;
+(id)getEncodings;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif