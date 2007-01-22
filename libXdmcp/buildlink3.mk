# $NetBSD: buildlink3.mk,v 1.5 2007/01/22 09:37:55 bsadewitz Exp $

BUILDLINK_DEPTH:=		${BUILDLINK_DEPTH}+
LIBXDMCP_BUILDLINK3_MK:=	${LIBXDMCP_BUILDLINK3_MK}+

.if ${BUILDLINK_DEPTH} == "+"
BUILDLINK_DEPENDS+=	libXdmcp
.endif

BUILDLINK_PACKAGES:=	${BUILDLINK_PACKAGES:NlibXdmcp}
BUILDLINK_PACKAGES+=	libXdmcp
BUILDLINK_ORDER:=	${BUILDLINK_ORDER} ${BUILDLINK_DEPTH}libXdmcp

.if ${LIBXDMCP_BUILDLINK3_MK} == "+"
BUILDLINK_API_DEPENDS.libXdmcp+=	libXdmcp>=1.0.2
BUILDLINK_PKGSRCDIR.libXdmcp?=	../../wip/libXdmcp
.endif	# LIBXDMCP_BUILDLINK3_MK

.include "../../x11/xproto/buildlink3.mk"

BUILDLINK_DEPTH:=		${BUILDLINK_DEPTH:S/+$//}
