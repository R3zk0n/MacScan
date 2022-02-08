// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGLUKHNOSPORTMOBILEFILEFILES_H
#define ORGLUKHNOSPORTMOBILEFILEFILES_H


#import <Foundation/Foundation.h>


@interface OrgLukhnosPortmobileFileFiles : NSObject



-(id)init;
+(id)createDirectoriesWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(id)newByteChannelWithOrgLukhnosPortmobileFilePath:(id)arg0 withOrgLukhnosPortmobileFileStandardOpenOptionEnum:(id)arg1 ;
+(id)createFileWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(NSInteger)sizeWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(BOOL)existsWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(BOOL)notExistsWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(BOOL)isDirectoryWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(BOOL)isWritableWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(id)newOutputStreamWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(id)newInputStreamWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(id)newBufferedReaderWithOrgLukhnosPortmobileFilePath:(id)arg0 withJavaNioCharsetCharset:(id)arg1 ;
+(id)newDirectoryStreamWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(BOOL)deleteIfExistsWithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(id)createTempFileWithOrgLukhnosPortmobileFilePath:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 ;
+(id)copy__WithOrgLukhnosPortmobileFilePath:(id)arg0 withOrgLukhnosPortmobileFilePath:(id)arg1 withOrgLukhnosPortmobileFileStandardCopyOptionArray:(id)arg2 ;
+(void)delete__WithOrgLukhnosPortmobileFilePath:(id)arg0 ;
+(id)moveWithOrgLukhnosPortmobileFilePath:(id)arg0 withOrgLukhnosPortmobileFilePath:(id)arg1 withOrgLukhnosPortmobileFileStandardCopyOptionArray:(id)arg2 ;
+(id)walkFileTreeWithOrgLukhnosPortmobileFilePath:(id)arg0 withOrgLukhnosPortmobileFileFileVisitor:(id)arg1 ;
+(id)createTempDirectoryWithNSString:(id)arg0 ;
+(id)createTempDirectoryWithOrgLukhnosPortmobileFilePath:(id)arg0 withNSString:(id)arg1 ;
+(id)readAttributesWithOrgLukhnosPortmobileFilePath:(id)arg0 withIOSClass:(id)arg1 ;


@end


#endif