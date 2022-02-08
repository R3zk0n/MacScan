// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTMESSAGEFORMAT_H
#define JAVATEXTMESSAGEFORMAT_H



#import "JavaTextFormat.h"
#import "JavaUtilLocale.h"
#import "IOSObjectArray.h"
#import "IOSIntArray.h"

@interface JavaTextMessageFormat : JavaTextFormat {
    JavaUtilLocale *locale_;
    IOSObjectArray *strings_;
    IOSIntArray *argumentNumbers_;
    IOSObjectArray *formats_;
    int maxOffset_;
    int maxArgumentIndex_;
}




-(id)initWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 ;
-(id)initWithNSString:(id)arg0 ;
-(void)applyPatternWithNSString:(id)arg0 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(id)formatToCharacterIteratorWithId:(id)arg0 ;
-(id)formatWithNSObjectArray:(id)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)formatImplWithNSObjectArray:(id)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 withJavaUtilList:(id)arg3 ;
-(void)handleArgumentFieldWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaTextFieldPosition:(id)arg3 withJavaUtilList:(id)arg4 ;
-(void)handleFormatWithJavaTextFormat:(id)arg0 withId:(id)arg1 withInt:(int)arg2 withJavaUtilList:(id)arg3 ;
-(id)formatWithId:(id)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)getFormats;
-(id)getFormatsByArgumentIndex;
-(void)setFormatByArgumentIndexWithInt:(int)arg0 withJavaTextFormat:(id)arg1 ;
-(void)setFormatsByArgumentIndexWithJavaTextFormatArray:(id)arg0 ;
-(id)getLocale;
-(NSUInteger)hash;
-(id)parseWithNSString:(id)arg0 ;
-(id)parseWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(id)parseObjectWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(int)matchWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 withBoolean:(BOOL)arg2 withNSStringArray:(id)arg3 ;
-(id)parseVariableWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(void)setFormatWithInt:(int)arg0 withJavaTextFormat:(id)arg1 ;
-(void)setFormatsWithJavaTextFormatArray:(id)arg0 ;
-(void)setLocaleWithJavaUtilLocale:(id)arg0 ;
-(id)decodeDecimalFormatWithJavaLangStringBuffer:(id)arg0 withJavaTextFormat:(id)arg1 ;
-(id)decodeSimpleDateFormatWithJavaLangStringBuffer:(id)arg0 withJavaTextFormat:(id)arg1 ;
-(id)toPattern;
-(void)appendQuotedWithJavaLangStringBuffer:(id)arg0 withNSString:(id)arg1 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
+(id)formatWithNSString:(id)arg0 withNSObjectArray:(id)arg1 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif