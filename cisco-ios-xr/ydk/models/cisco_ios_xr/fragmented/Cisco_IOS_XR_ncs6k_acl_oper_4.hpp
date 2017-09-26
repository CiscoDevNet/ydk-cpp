#ifndef _CISCO_IOS_XR_NCS6K_ACL_OPER_4_
#define _CISCO_IOS_XR_NCS6K_ACL_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ncs6k_acl_oper_0.hpp"
#include "Cisco_IOS_XR_ncs6k_acl_oper_2.hpp"
#include "Cisco_IOS_XR_ncs6k_acl_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs6k_acl_oper {


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail : public ydk::Entity
{
    public:
        AceDetail();
        ~AceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_id; //type: int32
        class Ipv4Tcam; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam
        class Ipv6Tcam; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam> ipv4tcam;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam> ipv6tcam;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam : public ydk::Entity
{
    public:
        Ipv4Tcam();
        ~Ipv4Tcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamEntry; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry> tcam_entry;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry : public ydk::Entity
{
    public:
        TcamEntry();
        ~TcamEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Value_; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_
        class Mask; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask
        class Result; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask> mask;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result> result;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_> value_;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam : public ydk::Entity
{
    public:
        Ipv6Tcam();
        ~Ipv6Tcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamEntry; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry> tcam_entry;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry : public ydk::Entity
{
    public:
        TcamEntry();
        ~TcamEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_address_mask; //type: string
        class Value_; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_
        class Mask; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask
        class Result; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask> mask;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result> result;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_> value_;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitDeny::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit : public ydk::Entity
{
    public:
        ImplicitNdnaPermit();
        ~ImplicitNdnaPermit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AceBrief; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief
        class AceDetail; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief> ace_brief;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail> > ace_detail;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief : public ydk::Entity
{
    public:
        AceBrief();
        ~AceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grant; //type: SseGrant
        ydk::YLeaf logging_enabled; //type: boolean
        ydk::YLeaf per_ace_icmp_enabled; //type: boolean
        ydk::YLeaf next_hop_enabled; //type: boolean
        ydk::YLeaf default_next_hop_enabled; //type: boolean
        ydk::YLeaf total_tcam_entries; //type: uint32
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf npu_id; //type: uint8
        class NextHopAddress; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress> next_hop_address;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress : public ydk::Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: SsePfilterAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceBrief::NextHopAddress


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail : public ydk::Entity
{
    public:
        AceDetail();
        ~AceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_id; //type: int32
        class Ipv4Tcam; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam
        class Ipv6Tcam; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam> ipv4tcam;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam> ipv6tcam;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam : public ydk::Entity
{
    public:
        Ipv4Tcam();
        ~Ipv4Tcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamEntry; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry> tcam_entry;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry : public ydk::Entity
{
    public:
        TcamEntry();
        ~TcamEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Value_; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_
        class Mask; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask
        class Result; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask> mask;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result> result;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_> value_;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam : public ydk::Entity
{
    public:
        Ipv6Tcam();
        ~Ipv6Tcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamEntry; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry> tcam_entry;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry : public ydk::Entity
{
    public:
        TcamEntry();
        ~TcamEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_address_mask; //type: string
        class Value_; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_
        class Mask; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask
        class Result; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask> mask;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result> result;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_> value_;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnaPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit : public ydk::Entity
{
    public:
        ImplicitNdnsPermit();
        ~ImplicitNdnsPermit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AceBrief; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief
        class AceDetail; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief> ace_brief;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail> > ace_detail;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief : public ydk::Entity
{
    public:
        AceBrief();
        ~AceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grant; //type: SseGrant
        ydk::YLeaf logging_enabled; //type: boolean
        ydk::YLeaf per_ace_icmp_enabled; //type: boolean
        ydk::YLeaf next_hop_enabled; //type: boolean
        ydk::YLeaf default_next_hop_enabled; //type: boolean
        ydk::YLeaf total_tcam_entries; //type: uint32
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf npu_id; //type: uint8
        class NextHopAddress; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress> next_hop_address;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress : public ydk::Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: SsePfilterAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceBrief::NextHopAddress


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail : public ydk::Entity
{
    public:
        AceDetail();
        ~AceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_id; //type: int32
        class Ipv4Tcam; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam
        class Ipv6Tcam; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam> ipv4tcam;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam> ipv6tcam;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam : public ydk::Entity
{
    public:
        Ipv4Tcam();
        ~Ipv4Tcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamEntry; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry> tcam_entry;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry : public ydk::Entity
{
    public:
        TcamEntry();
        ~TcamEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Value_; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_
        class Mask; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask
        class Result; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask> mask;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result> result;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_> value_;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam : public ydk::Entity
{
    public:
        Ipv6Tcam();
        ~Ipv6Tcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamEntry; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry> tcam_entry;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry : public ydk::Entity
{
    public:
        TcamEntry();
        ~TcamEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_address_mask; //type: string
        class Value_; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_
        class Mask; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask
        class Result; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask> mask;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result> result;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_> value_;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::Implicit::ImplicitAcl::InterfaceAclImplicit::ImplicitNdnsPermit::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs : public ydk::Entity
{
    public:
        SequenceBriefs();
        ~SequenceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SequenceBrief; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief> > sequence_brief;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief : public ydk::Entity
{
    public:
        SequenceBrief();
        ~SequenceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_number; //type: int32
        class CommonAcl; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl
        class InterfaceAcl; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl> > common_acl;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl> > interface_acl;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grant; //type: SseGrant
        ydk::YLeaf logging_enabled; //type: boolean
        ydk::YLeaf per_ace_icmp_enabled; //type: boolean
        ydk::YLeaf next_hop_enabled; //type: boolean
        ydk::YLeaf default_next_hop_enabled; //type: boolean
        ydk::YLeaf total_tcam_entries; //type: uint32
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf npu_id; //type: uint8
        class NextHopAddress; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress> next_hop_address;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress : public ydk::Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: SsePfilterAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::CommonAcl::NextHopAddress


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl : public ydk::Entity
{
    public:
        InterfaceAcl();
        ~InterfaceAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grant; //type: SseGrant
        ydk::YLeaf logging_enabled; //type: boolean
        ydk::YLeaf per_ace_icmp_enabled; //type: boolean
        ydk::YLeaf next_hop_enabled; //type: boolean
        ydk::YLeaf default_next_hop_enabled; //type: boolean
        ydk::YLeaf total_tcam_entries; //type: uint32
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf npu_id; //type: uint8
        class NextHopAddress; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress> next_hop_address;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress : public ydk::Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: SsePfilterAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceBriefs::SequenceBrief::InterfaceAcl::NextHopAddress


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails : public ydk::Entity
{
    public:
        SequenceDetails();
        ~SequenceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SequenceDetail; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail> > sequence_detail;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail : public ydk::Entity
{
    public:
        SequenceDetail();
        ~SequenceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_number; //type: int32
        class CommonAclDetail; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail
        class InterfaceAclDetail; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail> > common_acl_detail;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail> > interface_acl_detail;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail : public ydk::Entity
{
    public:
        CommonAclDetail();
        ~CommonAclDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AceBrief; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief
        class AceDetail; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief> ace_brief;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail> > ace_detail;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief : public ydk::Entity
{
    public:
        AceBrief();
        ~AceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grant; //type: SseGrant
        ydk::YLeaf logging_enabled; //type: boolean
        ydk::YLeaf per_ace_icmp_enabled; //type: boolean
        ydk::YLeaf next_hop_enabled; //type: boolean
        ydk::YLeaf default_next_hop_enabled; //type: boolean
        ydk::YLeaf total_tcam_entries; //type: uint32
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf npu_id; //type: uint8
        class NextHopAddress; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress> next_hop_address;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress : public ydk::Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: SsePfilterAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceBrief::NextHopAddress


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail : public ydk::Entity
{
    public:
        AceDetail();
        ~AceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_id; //type: int32
        class Ipv4Tcam; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam
        class Ipv6Tcam; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam> ipv4tcam;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam> ipv6tcam;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam : public ydk::Entity
{
    public:
        Ipv4Tcam();
        ~Ipv4Tcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamEntry; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry> tcam_entry;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry : public ydk::Entity
{
    public:
        TcamEntry();
        ~TcamEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Value_; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_
        class Mask; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask
        class Result; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask> mask;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result> result;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_> value_;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam : public ydk::Entity
{
    public:
        Ipv6Tcam();
        ~Ipv6Tcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamEntry; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry> tcam_entry;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry : public ydk::Entity
{
    public:
        TcamEntry();
        ~TcamEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_address_mask; //type: string
        class Value_; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_
        class Mask; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask
        class Result; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask> mask;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result> result;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_> value_;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::CommonAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail : public ydk::Entity
{
    public:
        InterfaceAclDetail();
        ~InterfaceAclDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AceBrief; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief
        class AceDetail; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief> ace_brief;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail> > ace_detail;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief : public ydk::Entity
{
    public:
        AceBrief();
        ~AceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grant; //type: SseGrant
        ydk::YLeaf logging_enabled; //type: boolean
        ydk::YLeaf per_ace_icmp_enabled; //type: boolean
        ydk::YLeaf next_hop_enabled; //type: boolean
        ydk::YLeaf default_next_hop_enabled; //type: boolean
        ydk::YLeaf total_tcam_entries; //type: uint32
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf npu_id; //type: uint8
        class NextHopAddress; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress> next_hop_address;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress : public ydk::Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_type; //type: SsePfilterAddr
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceBrief::NextHopAddress


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail : public ydk::Entity
{
    public:
        AceDetail();
        ~AceDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry_id; //type: int32
        class Ipv4Tcam; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam
        class Ipv6Tcam; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam> ipv4tcam;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam> ipv6tcam;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam : public ydk::Entity
{
    public:
        Ipv4Tcam();
        ~Ipv4Tcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamEntry; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry> tcam_entry;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry : public ydk::Entity
{
    public:
        TcamEntry();
        ~TcamEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Value_; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_
        class Mask; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask
        class Result; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask> mask;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result> result;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_> value_;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Mask::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Result::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf source_range_id; //type: uint16
        ydk::YLeaf destination_range_id; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf fragment; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf layer4_source_port; //type: uint16
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf packet_length_range; //type: uint8
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv4Tcam::TcamEntry::Value_::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam : public ydk::Entity
{
    public:
        Ipv6Tcam();
        ~Ipv6Tcam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamEntry; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry> tcam_entry;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry : public ydk::Entity
{
    public:
        TcamEntry();
        ~TcamEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_address_mask; //type: string
        class Value_; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_
        class Mask; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask
        class Result; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask> mask;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result> result;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_> value_;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Mask::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Result::TcpFlags


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_ : public ydk::Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_id; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf layer4_source_port; //type: uint32
        ydk::YLeaf layer4_destination_port; //type: uint16
        ydk::YLeaf source_range_id; //type: uint32
        ydk::YLeaf destination_range_id; //type: uint32
        ydk::YLeaf destination_header; //type: uint8
        ydk::YLeaf receive_transition_gap_header; //type: uint8
        ydk::YLeaf authentication_header; //type: uint8
        ydk::YLeaf fragment; //type: uint8
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf packet_length_range; //type: uint32
        class TcpFlags; //type: AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs6k_acl_oper::AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags> tcp_flags;
        
}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_


class AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags : public ydk::Entity
{
    public:
        TcpFlags();
        ~TcpFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf urgent; //type: uint8
        ydk::YLeaf acknowledge; //type: uint8
        ydk::YLeaf push; //type: uint8
        ydk::YLeaf reset; //type: uint8
        ydk::YLeaf synchronization; //type: uint8
        ydk::YLeaf finish; //type: uint8

}; // AccessListHardware::Nodes::Node::Ingress::Ipv6::Accesses::Access::SequenceDetails::SequenceDetail::InterfaceAclDetail::AceDetail::Ipv6Tcam::TcamEntry::Value_::TcpFlags


}
}

#endif /* _CISCO_IOS_XR_NCS6K_ACL_OPER_4_ */

