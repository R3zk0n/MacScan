// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0



@interface NSString (JavaString)

@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)getChars:(int)arg0 sourceEnd:(int)arg1 destination:(id)arg2 destinationBegin:(int)arg3 ;
-(int)compareToWithId:(id)arg0 ;
-(int)compareToIgnoreCase:(id)arg0 ;
-(id)substring:(int)arg0 ;
-(id)substring:(int)arg0 endIndex:(int)arg1 ;
-(int)indexOf:(int)arg0 ;
-(int)indexOf:(int)arg0 fromIndex:(int)arg1 ;
-(int)indexOfString:(id)arg0 ;
-(int)indexOfString:(id)arg0 fromIndex:(int)arg1 ;
-(BOOL)isEmpty;
-(int)lastIndexOf:(int)arg0 ;
-(int)lastIndexOf:(int)arg0 fromIndex:(int)arg1 ;
-(int)lastIndexOfString:(id)arg0 ;
-(int)lastIndexOfString:(id)arg0 fromIndex:(int)arg1 ;
-(id)toCharArray;
-(unsigned short)charAtWithInt:(int)arg0 ;
-(id)subSequenceFrom:(int)arg0 to:(int)arg1 ;
-(id)replace:(unsigned short)arg0 withChar:(unsigned short)arg1 ;
-(id)replace:(id)arg0 withSequence:(id)arg1 ;
-(id)replaceAll:(id)arg0 withReplacement:(id)arg1 ;
-(id)replaceFirst:(id)arg0 withReplacement:(id)arg1 ;
-(id)getBytes;
-(id)getBytesWithCharsetName:(id)arg0 ;
-(id)getBytesWithCharset:(id)arg0 ;
-(id)getBytesWithEncoding:(NSUInteger)arg0 ;
-(void)getBytesWithSrcBegin:(int)arg0 withSrcEnd:(int)arg1 withDst:(id)arg2 withDstBegin:(int)arg3 ;
-(BOOL)hasPrefix:(id)arg0 offset:(int)arg1 ;
-(id)trim;
-(id)split:(id)arg0 ;
-(id)split:(id)arg0 limit:(int)arg1 ;
-(BOOL)equalsIgnoreCase:(id)arg0 ;
-(id)lowercaseStringWithJRELocale:(id)arg0 ;
-(id)uppercaseStringWithJRELocale:(id)arg0 ;
-(BOOL)regionMatches:(int)arg0 aString:(id)arg1 otherOffset:(int)arg2 count:(int)arg3 ;
-(BOOL)regionMatches:(BOOL)arg0 thisOffset:(int)arg1 aString:(id)arg2 otherOffset:(int)arg3 count:(int)arg4 ;
-(id)intern;
-(id)concat:(id)arg0 ;
-(BOOL)contains:(id)arg0 ;
-(int)codePointAt:(int)arg0 ;
-(int)codePointBefore:(int)arg0 ;
-(int)codePointCount:(int)arg0 endIndex:(int)arg1 ;
-(int)offsetByCodePoints:(int)arg0 codePointOffset:(int)arg1 ;
-(BOOL)matches:(id)arg0 ;
-(BOOL)contentEqualsCharSequence:(id)arg0 ;
-(BOOL)contentEqualsStringBuffer:(id)arg0 ;
-(id)getClass;
+(id)valueOf:(id)arg0 ;
+(id)valueOfBool:(BOOL)arg0 ;
+(id)valueOfChar:(unsigned short)arg0 ;
+(id)valueOfChars:(id)arg0 ;
+(id)valueOfChars:(id)arg0 offset:(int)arg1 count:(int)arg2 ;
+(id)valueOfDouble:(CGFloat)arg0 ;
+(id)valueOfFloat:(float)arg0 ;
+(id)valueOfInt:(int)arg0 ;
+(id)valueOfLong:(NSInteger)arg0 ;
+(id)stringWithCharacters:(id)arg0 ;
+(id)stringWithCharacters:(id)arg0 offset:(int)arg1 length:(int)arg2 ;
+(id)stringWithOffset:(int)arg0 length:(int)arg1 characters:(id)arg2 ;
+(id)stringWithJavaLangStringBuffer:(id)arg0 ;
+(id)stringWithJavaLangStringBuilder:(id)arg0 ;
+(id)stringWithBytes:(id)arg0 ;
+(id)stringWithBytes:(id)arg0 charsetName:(id)arg1 ;
+(id)stringWithBytes:(id)arg0 charset:(id)arg1 ;
+(id)stringWithBytes:(id)arg0 hibyte:(int)arg1 ;
+(id)stringWithBytes:(id)arg0 offset:(int)arg1 length:(int)arg2 ;
+(id)stringWithBytes:(id)arg0 offset:(int)arg1 length:(int)arg2 charsetName:(id)arg3 ;
+(id)stringWithBytes:(id)arg0 offset:(int)arg1 length:(int)arg2 charset:(id)arg3 ;
+(id)stringWithBytes:(id)arg0 hibyte:(NSUInteger)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 ;
+(id)stringWithBytes:(id)arg0 offset:(int)arg1 length:(int)arg2 encoding:(NSUInteger)arg3 ;
+(id)stringWithInts:(id)arg0 offset:(int)arg1 length:(int)arg2 ;
+(id)formatWithNSString:(id)arg0 withNSObjectArray:(id)arg1 ;
+(id)formatWithJavaUtilLocale:(id)arg0 withNSString:(id)arg1 withNSObjectArray:(id)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;
@end


