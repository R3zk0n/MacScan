// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILIOUTILS_H
#define ORGAPACHELUCENEUTILIOUTILS_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilIOUtils : NSObject



-(id)init;
+(void)closeWithJavaIoCloseableArray:(id)arg0 ;
+(void)closeWithJavaLangIterable:(id)arg0 ;
+(void)closeWhileHandlingExceptionWithJavaIoCloseableArray:(id)arg0 ;
+(void)closeWhileHandlingExceptionWithJavaLangIterable:(id)arg0 ;
+(id)getDecodingReaderWithJavaIoInputStream:(id)arg0 withJavaNioCharsetCharset:(id)arg1 ;
+(id)getDecodingReaderWithIOSClass:(id)arg0 withNSString:(id)arg1 withJavaNioCharsetCharset:(id)arg2 ;
+(void)deleteFilesIgnoringExceptionsWithOrgApacheLuceneStoreDirectory:(id)arg0 withNSStringArray:(id)arg1 ;
+(void)deleteFilesIgnoringExceptionsWithOrgLukhnosPortmobileFilePathArray:(id)arg0 ;
+(void)deleteFilesIgnoringExceptionsWithJavaUtilCollection:(id)arg0 ;
+(void)deleteFilesIfExistWithOrgLukhnosPortmobileFilePathArray:(id)arg0 ;
+(void)deleteFilesIfExistWithJavaUtilCollection:(id)arg0 ;
+(void)rmWithOrgLukhnosPortmobileFilePathArray:(id)arg0 ;
+(void)reThrowWithJavaLangThrowable:(id)arg0 ;
+(void)reThrowUncheckedWithJavaLangThrowable:(id)arg0 ;
+(void)fsyncWithOrgLukhnosPortmobileFilePath:(id)arg0 withBoolean:(BOOL)arg1 ;
+(BOOL)spinsWithOrgApacheLuceneStoreDirectory:(id)arg0 ;
+(BOOL)spinsWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(BOOL)spinsLinuxWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(void)initialize;


@end


#endif