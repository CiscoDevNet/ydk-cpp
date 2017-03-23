#ifndef _CISCO_IOS_XR_MPLS_STATIC_OPER_
#define _CISCO_IOS_XR_MPLS_STATIC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_mpls_static_oper {

class MplsStatic : public Entity
{
    public:
        MplsStatic();
        ~MplsStatic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Vrfs; //type: MplsStatic::Vrfs
        class Summary; //type: MplsStatic::Summary
        class LocalLabels; //type: MplsStatic::LocalLabels

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels> local_labels;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs> vrfs;


}; // MplsStatic


class MplsStatic::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: MplsStatic::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf> > vrf;


}; // MplsStatic::Vrfs


class MplsStatic::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class Lsps; //type: MplsStatic::Vrfs::Vrf::Lsps
        class LocalLabels; //type: MplsStatic::Vrfs::Vrf::LocalLabels

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels> local_labels;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps> lsps;


}; // MplsStatic::Vrfs::Vrf


class MplsStatic::Vrfs::Vrf::Lsps : public Entity
{
    public:
        Lsps();
        ~Lsps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Lsp; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp> > lsp;


}; // MplsStatic::Vrfs::Vrf::Lsps


class MplsStatic::Vrfs::Vrf::Lsps::Lsp : public Entity
{
    public:
        Lsp();
        ~Lsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_name; //type: string
        YLeaf lsp_name_xr; //type: string

        class Label; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label> label;


}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf label_mode; //type: MgmtMplsStaticLabelModeEnum
        YLeaf label_status; //type: MgmtMplsStaticLabelStatusEnum
        YLeaf vrf_name; //type: string
        YLeaf pathset_via_resolve; //type: boolean
        YLeaf backup_pathset_via_resolve; //type: boolean
        YLeaf address_family; //type: MgmtStaticAddrEnum

        class Prefix; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix
        class PathsetResolveNh; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh
        class BackupPathsetResolveNh; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh
        class PathInfo; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo
        class BackupPathInfo; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo> > backup_path_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh> backup_pathset_resolve_nh;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo> > path_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh> pathset_resolve_nh;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix> prefix;


}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint8

        class Prefix_; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_> prefix;


}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_ : public Entity
{
    public:
        Prefix_();
        ~Prefix_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh : public Entity
{
    public:
        PathsetResolveNh();
        ~PathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh : public Entity
{
    public:
        BackupPathsetResolveNh();
        ~BackupPathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo : public Entity
{
    public:
        PathInfo();
        ~PathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_number; //type: uint32
        YLeaf type; //type: MgmtStaticPathEnum
        YLeaf path_role; //type: MplsStaticPathRoleEnum
        YLeaf path_id; //type: uint8
        YLeaf backup_id; //type: uint8
        YLeaf status; //type: MgmtMplsStaticPathStatusEnum

        class Nexthop; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop> nexthop;


}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf afi; //type: uint32

        class Address; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address> address;


}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo : public Entity
{
    public:
        BackupPathInfo();
        ~BackupPathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_number; //type: uint32
        YLeaf type; //type: MgmtStaticPathEnum
        YLeaf path_role; //type: MplsStaticPathRoleEnum
        YLeaf path_id; //type: uint8
        YLeaf backup_id; //type: uint8
        YLeaf status; //type: MgmtMplsStaticPathStatusEnum

        class Nexthop; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop> nexthop;


}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf afi; //type: uint32

        class Address; //type: MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address> address;


}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop


class MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address


class MplsStatic::Vrfs::Vrf::LocalLabels : public Entity
{
    public:
        LocalLabels();
        ~LocalLabels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LocalLabel; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel> > local_label;


}; // MplsStatic::Vrfs::Vrf::LocalLabels


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel : public Entity
{
    public:
        LocalLabel();
        ~LocalLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label_id; //type: uint32
        YLeaf label; //type: uint32
        YLeaf label_mode; //type: MgmtMplsStaticLabelModeEnum
        YLeaf label_status; //type: MgmtMplsStaticLabelStatusEnum
        YLeaf vrf_name; //type: string
        YLeaf pathset_via_resolve; //type: boolean
        YLeaf backup_pathset_via_resolve; //type: boolean
        YLeaf address_family; //type: MgmtStaticAddrEnum

        class Prefix; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix
        class PathsetResolveNh; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh
        class BackupPathsetResolveNh; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh
        class PathInfo; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo
        class BackupPathInfo; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo> > backup_path_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh> backup_pathset_resolve_nh;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo> > path_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh> pathset_resolve_nh;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix> prefix;


}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint8

        class Prefix_; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_> prefix;


}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_ : public Entity
{
    public:
        Prefix_();
        ~Prefix_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh : public Entity
{
    public:
        PathsetResolveNh();
        ~PathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh : public Entity
{
    public:
        BackupPathsetResolveNh();
        ~BackupPathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo : public Entity
{
    public:
        PathInfo();
        ~PathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_number; //type: uint32
        YLeaf type; //type: MgmtStaticPathEnum
        YLeaf path_role; //type: MplsStaticPathRoleEnum
        YLeaf path_id; //type: uint8
        YLeaf backup_id; //type: uint8
        YLeaf status; //type: MgmtMplsStaticPathStatusEnum

        class Nexthop; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop> nexthop;


}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf afi; //type: uint32

        class Address; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address> address;


}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo : public Entity
{
    public:
        BackupPathInfo();
        ~BackupPathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_number; //type: uint32
        YLeaf type; //type: MgmtStaticPathEnum
        YLeaf path_role; //type: MplsStaticPathRoleEnum
        YLeaf path_id; //type: uint8
        YLeaf backup_id; //type: uint8
        YLeaf status; //type: MgmtMplsStaticPathStatusEnum

        class Nexthop; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop> nexthop;


}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf afi; //type: uint32

        class Address; //type: MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address> address;


}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop


class MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address


class MplsStatic::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label_count; //type: uint32
        YLeaf label_error_count; //type: uint32
        YLeaf label_discrepancy_count; //type: uint32
        YLeaf vrf_count; //type: uint32
        YLeaf active_vrf_count; //type: uint32
        YLeaf interface_count; //type: uint32
        YLeaf interface_foward_reference_count; //type: uint32
        YLeaf mpls_enabled_interface_count; //type: uint32
        YLeaf ipv4_route_count; //type: uint32
        YLeaf ipv6_route_count; //type: uint32
        YLeaf lsd_connected; //type: boolean
        YLeaf im_connected; //type: boolean
        YLeaf rsi_connected; //type: boolean
        YLeaf ribv4_connected; //type: boolean
        YLeaf ribv6_connected; //type: boolean



}; // MplsStatic::Summary


class MplsStatic::LocalLabels : public Entity
{
    public:
        LocalLabels();
        ~LocalLabels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LocalLabel; //type: MplsStatic::LocalLabels::LocalLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel> > local_label;


}; // MplsStatic::LocalLabels


class MplsStatic::LocalLabels::LocalLabel : public Entity
{
    public:
        LocalLabel();
        ~LocalLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label_id; //type: uint32
        YLeaf label; //type: uint32
        YLeaf label_mode; //type: MgmtMplsStaticLabelModeEnum
        YLeaf label_status; //type: MgmtMplsStaticLabelStatusEnum
        YLeaf vrf_name; //type: string
        YLeaf pathset_via_resolve; //type: boolean
        YLeaf backup_pathset_via_resolve; //type: boolean
        YLeaf address_family; //type: MgmtStaticAddrEnum

        class Prefix; //type: MplsStatic::LocalLabels::LocalLabel::Prefix
        class PathsetResolveNh; //type: MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh
        class BackupPathsetResolveNh; //type: MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh
        class PathInfo; //type: MplsStatic::LocalLabels::LocalLabel::PathInfo
        class BackupPathInfo; //type: MplsStatic::LocalLabels::LocalLabel::BackupPathInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::BackupPathInfo> > backup_path_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh> backup_pathset_resolve_nh;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::PathInfo> > path_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh> pathset_resolve_nh;
        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::Prefix> prefix;


}; // MplsStatic::LocalLabels::LocalLabel


class MplsStatic::LocalLabels::LocalLabel::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint8

        class Prefix_; //type: MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_> prefix;


}; // MplsStatic::LocalLabels::LocalLabel::Prefix


class MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_ : public Entity
{
    public:
        Prefix_();
        ~Prefix_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_


class MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh : public Entity
{
    public:
        PathsetResolveNh();
        ~PathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh


class MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh : public Entity
{
    public:
        BackupPathsetResolveNh();
        ~BackupPathsetResolveNh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh


class MplsStatic::LocalLabels::LocalLabel::PathInfo : public Entity
{
    public:
        PathInfo();
        ~PathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_number; //type: uint32
        YLeaf type; //type: MgmtStaticPathEnum
        YLeaf path_role; //type: MplsStaticPathRoleEnum
        YLeaf path_id; //type: uint8
        YLeaf backup_id; //type: uint8
        YLeaf status; //type: MgmtMplsStaticPathStatusEnum

        class Nexthop; //type: MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop> nexthop;


}; // MplsStatic::LocalLabels::LocalLabel::PathInfo


class MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf afi; //type: uint32

        class Address; //type: MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address> address;


}; // MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop


class MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address


class MplsStatic::LocalLabels::LocalLabel::BackupPathInfo : public Entity
{
    public:
        BackupPathInfo();
        ~BackupPathInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path_number; //type: uint32
        YLeaf type; //type: MgmtStaticPathEnum
        YLeaf path_role; //type: MplsStaticPathRoleEnum
        YLeaf path_id; //type: uint8
        YLeaf backup_id; //type: uint8
        YLeaf status; //type: MgmtMplsStaticPathStatusEnum

        class Nexthop; //type: MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop> nexthop;


}; // MplsStatic::LocalLabels::LocalLabel::BackupPathInfo


class MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf label; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf afi; //type: uint32

        class Address; //type: MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address

        std::shared_ptr<Cisco_IOS_XR_mpls_static_oper::MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address> address;


}; // MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop


class MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MgmtStaticAddrEnum
        YLeaf ipv4_prefix; //type: string
        YLeaf ipv6_prefix; //type: string



}; // MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address

class MgmtMplsStaticPathStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf path_next_hop_none;
        static const Enum::YLeaf path_next_hop_interface_down;
        static const Enum::YLeaf path_next_hop_valid;
        static const Enum::YLeaf resolve_failed;
        static const Enum::YLeaf frr_backup;
        static const Enum::YLeaf backup;

};

class MgmtStaticPathEnum : public Enum
{
    public:
        static const Enum::YLeaf cross_connect_path;
        static const Enum::YLeaf pop_lookup_path;

};

class MgmtMplsStaticLabelModeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf per_prefix;
        static const Enum::YLeaf per_vrf;
        static const Enum::YLeaf cross_connect;

};

class MgmtMplsStaticLabelStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf not_created;
        static const Enum::YLeaf vrf_down;
        static const Enum::YLeaf rewrite_vrf_down;
        static const Enum::YLeaf lsd_disconnected;
        static const Enum::YLeaf lsd_failed;
        static const Enum::YLeaf wait_for_lsd_reply;
        static const Enum::YLeaf label_created;
        static const Enum::YLeaf label_create_failed;
        static const Enum::YLeaf label_rewrite_failed;
        static const Enum::YLeaf rewrite_next_hop_interface_down;
        static const Enum::YLeaf label_discrepancy;
        static const Enum::YLeaf rewrite_discrepancy;
        static const Enum::YLeaf label_status_unknown;

};

class MgmtStaticAddrEnum : public Enum
{
    public:
        static const Enum::YLeaf not_applicable;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class MplsStaticPathRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf primary;
        static const Enum::YLeaf backup;
        static const Enum::YLeaf primary_and_backup;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_STATIC_OPER_ */

