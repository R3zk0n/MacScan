// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOIOUTILS_H
#define LIBCOREIOIOUTILS_H


#import <Foundation/Foundation.h>


@interface LibcoreIoIoUtils : NSObject



-(id)init;
+(void)closeWithJavaIoFileDescriptor:(id)arg0 ;
+(void)closeQuietlyWithJavaLangAutoCloseable:(id)arg0 ;
+(void)closeQuietlyWithJavaIoFileDescriptor:(id)arg0 ;
+(void)closeQuietlyWithJavaNetSocket:(id)arg0 ;
+(void)setBlockingWithJavaIoFileDescriptor:(id)arg0 withBoolean:(BOOL)arg1 ;
+(id)readFileAsByteArrayWithNSString:(id)arg0 ;
+(id)readFileAsStringWithNSString:(id)arg0 ;
+(id)readFileAsBytesWithNSString:(id)arg0 ;
+(void)deleteContentsWithJavaIoFile:(id)arg0 ;
+(BOOL)canOpenReadOnlyWithNSString:(id)arg0 ;
+(void)throwInterruptedIoException;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif