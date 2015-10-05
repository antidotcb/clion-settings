#set($FULL_NAME = "Danylo Bilyk")
//
#if ($HEADER_COMMENTS)
#if ($ORGANIZATION_NAME && $ORGANIZATION_NAME != "")
// Copyright (c) $YEAR ${ORGANIZATION_NAME}#if (!$ORGANIZATION_NAME.endsWith(".")).#end All rights reserved.
#else
// Copyright (c) $YEAR $FULL_NAME. All rights reserved.
#end
// Created by $FULL_NAME on ${DATE}.
//
#end

