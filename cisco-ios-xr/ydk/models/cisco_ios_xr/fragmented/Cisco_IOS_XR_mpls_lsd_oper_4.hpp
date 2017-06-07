#ifndef _CISCO_IOS_XR_MPLS_LSD_OPER_4_
#define _CISCO_IOS_XR_MPLS_LSD_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_lsd_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_lsd_oper {


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data : public Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nexthop; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string
        class Label; //type: MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;
        
}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData : public Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_local_label_str; //type: string
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint32
        YLeaf flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData : public Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteIpv4S::RewriteIpv4::Mois::MoiArray::Moi::DmtcData


class MplsLsd::Rewrite::RewriteTes : public Entity
{
    public:
        RewriteTes();
        ~RewriteTes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RewriteTe; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe> > rewrite_te;
        
}; // MplsLsd::Rewrite::RewriteTes


class MplsLsd::Rewrite::RewriteTes::RewriteTe : public Entity
{
    public:
        RewriteTe();
        ~RewriteTe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf rewrite_version; //type: uint64
        YLeaf bcdl_priority; //type: uint8
        YLeaf lsd_queue; //type: uint8
        YLeaf rw_install_time; //type: uint64
        YLeaf rw_install_age; //type: uint64
        YLeaf rw_updated; //type: int32
        YLeaf priority_updated; //type: int32
        class FpiKey; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey
        class RewriteId; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId
        class AssociatedFpi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi
        class V4Rpf; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf
        class V6Rpf; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf
        class Mois; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi> > associated_fpi;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey> fpi_key;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois> > mois;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf> > v6_rpf;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey : public Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Fpi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi> fpi;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fpi_type; //type: MgmtLsdFpiEnum
        class LabelData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData> te_data;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::LabelData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::TeData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pwhe_list_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::PwListData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::FpiKey::ApplicationOwner


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId : public Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RewriteId_; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_> rewrite_id;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_ : public Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rewrite_id_type; //type: MgmtLsdRwIdEnum
        class LabelContext; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pwhe_intf; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gre_interface; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf greipv6_interface; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite : public Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_data; //type: list of  uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi : public Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Fpi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi> fpi;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fpi_type; //type: MgmtLsdFpiEnum
        class LabelData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData> te_data;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::LabelData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::TeData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pwhe_list_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::PwListData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::AssociatedFpi::ApplicationOwner


class MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf : public Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf v4_rpf_neighbor; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::V4Rpf


class MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf : public Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf v6_rpf_neighbor; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::V6Rpf


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois : public Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ApplicationResource; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource
        class MoiArray; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray> > moi_array;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource : public Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::ApplicationResource


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray : public Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Moi; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi> moi;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi : public Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf moi_type; //type: MgmtLsdMoiEnum
        class PopAndLookupIpv4; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data> tev4_data;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4 : public Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp : public Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6 : public Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Ipv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf backup_interface; //type: string
        YLeaf backup_ipv4_next_hop; //type: string
        YLeaf merge_point_label; //type: uint32
        YLeaf backup_local_label; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf tunnel_weight; //type: uint32
        YLeaf data_out_parent_interface; //type: string
        YLeaf tunnel_class; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Tev4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf cross_connect_id; //type: uint32
        YLeaf pseuodo_wire_connect_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf split_horizon_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf out_interface; //type: string
        YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::IpSubData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf control_word; //type: int32
        YLeaf imposition; //type: int32
        YLeaf vctype; //type: uint8
        YLeaf pw_list_id; //type: uint16
        YLeaf pwhe_interface; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf l3_interface; //type: string
        YLeaf l2_interface; //type: string
        YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::PwListData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data : public Entity
{
    public:
        Stackv4Data();
        ~Stackv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf owner_application_type; //type: MgmtLsdAppEnum
        class Nexthop; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop> nexthop;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::Nexthop


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string
        class Label; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label> > label;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv4Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data : public Entity
{
    public:
        Stackv6Data();
        ~Stackv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nexthop; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop
        class InnerStack; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack> inner_stack;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop> nexthop;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::Nexthop


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack : public Entity
{
    public:
        InnerStack();
        ~InnerStack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf num_nexthops; //type: uint8
        YLeaf num_lbls; //type: uint8
        YLeafList nexthop; //type: list of  string
        class Label; //type: MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label> > label;
        
}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf outgoing_label; //type: uint32
        YLeaf outgoing_label_str; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::Stackv6Data::InnerStack::Label


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData : public Entity
{
    public:
        TeHeadData();
        ~TeHeadData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf tunnel_local_label; //type: uint32
        YLeaf tunnel_local_label_str; //type: string
        YLeaf tunnel_fwd_class; //type: uint8
        YLeaf tunnel_load_metric; //type: uint32
        YLeaf flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::TeHeadData


class MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData : public Entity
{
    public:
        DmtcData();
        ~DmtcData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteTes::RewriteTe::Mois::MoiArray::Moi::DmtcData


class MplsLsd::Rewrite::RewriteLabels : public Entity
{
    public:
        RewriteLabels();
        ~RewriteLabels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RewriteLabel; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel> > rewrite_label;
        
}; // MplsLsd::Rewrite::RewriteLabels


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel : public Entity
{
    public:
        RewriteLabel();
        ~RewriteLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_id; //type: int32
        YLeaf rewrite_version; //type: uint64
        YLeaf bcdl_priority; //type: uint8
        YLeaf lsd_queue; //type: uint8
        YLeaf rw_install_time; //type: uint64
        YLeaf rw_install_age; //type: uint64
        YLeaf rw_updated; //type: int32
        YLeaf priority_updated; //type: int32
        class FpiKey; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey
        class RewriteId; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId
        class AssociatedFpi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi
        class V4Rpf; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf
        class V6Rpf; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf
        class Mois; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi> > associated_fpi;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey> fpi_key;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois> > mois;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId> rewrite_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf> > v4_rpf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf> > v6_rpf;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey : public Entity
{
    public:
        FpiKey();
        ~FpiKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Fpi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi> fpi;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fpi_type; //type: MgmtLsdFpiEnum
        class LabelData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData> te_data;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::LabelData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::TeData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pwhe_list_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::PwListData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::FpiKey::ApplicationOwner


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId : public Entity
{
    public:
        RewriteId();
        ~RewriteId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RewriteId_; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_> rewrite_id;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_ : public Entity
{
    public:
        RewriteId_();
        ~RewriteId_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rewrite_id_type; //type: MgmtLsdRwIdEnum
        class LabelContext; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext
        class LocalLabelRewrite; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext> label_context;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite> local_label_rewrite;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext : public Entity
{
    public:
        LabelContext();
        ~LabelContext();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label_context_type; //type: MgmtLsdLblCtxEnum
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data
        class Ipv4L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData
        class Ipv6L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData
        class VrfL3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData
        class Cev4L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData
        class Cev6L3VpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData
        class LabelBlockData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData
        class Tev4P2MpData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData
        class MldPv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData
        class TpData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData
        class GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation
        class Ipv6GenericRoutingEncapsulation; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation
        class EvpnData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData
        class Ipv4BlbData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData
        class Ipv6BlbData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData
        class PiMiPmsiData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData
        class PiMsPmsiData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData
        class NextHopSetL3Vpn; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn
        class SrPrefixSegment; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment
        class SrAdjSegmentIpv4; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4
        class SrAdjSegmentIpv6; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6
        class LabelBlockSrgbData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData
        class TeBinding; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData> cev4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData> cev6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData> evpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation> generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData> ipv4blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData> ipv4l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation> ipv6_generic_routing_encapsulation;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData> ipv6blb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData> ipv6l3vpn_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData> label_block_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData> label_block_srgb_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data> mld_pv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn> next_hop_set_l3vpn;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData> pi_mi_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData> pi_ms_pmsi_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4> sr_adj_segment_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6> sr_adj_segment_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment> sr_prefix_segment;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding> te_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data> tev4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData> tev4p2mp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData> tp_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData> vrf_l3vpn_data;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf security_id; //type: uint32
        YLeaf vrf_name; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf tunnel_dest; //type: string
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf is_srte; //type: int32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData : public Entity
{
    public:
        Ipv4L3VpnData();
        ~Ipv4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4L3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData : public Entity
{
    public:
        Ipv6L3VpnData();
        ~Ipv6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf route_distinguisher; //type: uint64

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6L3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData : public Entity
{
    public:
        VrfL3VpnData();
        ~VrfL3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::VrfL3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData : public Entity
{
    public:
        Cev4L3VpnData();
        ~Cev4L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev4L3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData : public Entity
{
    public:
        Cev6L3VpnData();
        ~Cev6L3VpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf ipv6_next_hop; //type: string
        YLeaf security_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Cev6L3VpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf pseudowire_id; //type: uint64
        YLeaf remote_l2_router_id; //type: uint32
        YLeaf subinterface; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData : public Entity
{
    public:
        LabelBlockData();
        ~LabelBlockData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service; //type: uint8
        YLeaf vpn_id; //type: uint16
        YLeaf edge_id; //type: uint16
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData : public Entity
{
    public:
        IpSubData();
        ~IpSubData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf parent_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::IpSubData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData : public Entity
{
    public:
        Tev4P2MpData();
        ~Tev4P2MpData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf tunnel_source; //type: string
        YLeaf p2mp_id; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf tunnel_id_extension; //type: uint32
        YLeaf tunnel_lsp_id; //type: uint32
        YLeaf previous_hop; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Tev4P2MpData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data : public Entity
{
    public:
        MldPv4Data();
        ~MldPv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf type; //type: uint16
        YLeaf lsm_id; //type: uint32
        YLeaf peer_lsrid; //type: string
        YLeaf peer_label_space_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::MldPv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData : public Entity
{
    public:
        PseudowireHeadEndData();
        ~PseudowireHeadEndData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pwhe_intf; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PseudowireHeadEndData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData : public Entity
{
    public:
        TpData();
        ~TpData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_global_id; //type: uint32
        YLeaf source_node_id; //type: string
        YLeaf dest_global_id; //type: uint32
        YLeaf dest_node_id; //type: string
        YLeaf source_tunnel_id; //type: uint16
        YLeaf dest_tunnel_id; //type: uint16
        YLeaf lsp_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TpData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation : public Entity
{
    public:
        GenericRoutingEncapsulation();
        ~GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gre_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation : public Entity
{
    public:
        Ipv6GenericRoutingEncapsulation();
        ~Ipv6GenericRoutingEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf greipv6_interface; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6GenericRoutingEncapsulation


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData : public Entity
{
    public:
        EvpnData();
        ~EvpnData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf evpn_id; //type: uint32
        YLeaf evpn_tag; //type: uint32
        YLeaf ethernet_segment; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::EvpnData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData : public Entity
{
    public:
        Ipv4BlbData();
        ~Ipv4BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv4BlbData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData : public Entity
{
    public:
        Ipv6BlbData();
        ~Ipv6BlbData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf blb_intf; //type: string
        YLeaf prefix; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::Ipv6BlbData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData : public Entity
{
    public:
        PiMiPmsiData();
        ~PiMiPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_id; //type: uint32
        YLeaf head; //type: int32
        YLeaf v6; //type: int32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMiPmsiData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData : public Entity
{
    public:
        PiMsPmsiData();
        ~PiMsPmsiData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_id; //type: uint32
        YLeaf source; //type: string
        YLeaf head; //type: int32
        YLeaf v6; //type: int32
        YLeaf hli; //type: uint32
        YLeaf seg; //type: int32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::PiMsPmsiData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn : public Entity
{
    public:
        NextHopSetL3Vpn();
        ~NextHopSetL3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf next_hop_set_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::NextHopSetL3Vpn


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment : public Entity
{
    public:
        SrPrefixSegment();
        ~SrPrefixSegment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf segment_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrPrefixSegment


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4 : public Entity
{
    public:
        SrAdjSegmentIpv4();
        ~SrAdjSegmentIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv4


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6 : public Entity
{
    public:
        SrAdjSegmentIpv6();
        ~SrAdjSegmentIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        YLeaf type; //type: uint32
        YLeaf intf; //type: string
        YLeaf addr; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::SrAdjSegmentIpv6


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData : public Entity
{
    public:
        LabelBlockSrgbData();
        ~LabelBlockSrgbData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_label; //type: uint32
        YLeaf offset; //type: uint32
        YLeaf size; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::LabelBlockSrgbData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding : public Entity
{
    public:
        TeBinding();
        ~TeBinding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf te_identifier; //type: uint32
        YLeaf te_type; //type: MgmtLsdTeBindingEnum

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LabelContext::TeBinding


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite : public Entity
{
    public:
        LocalLabelRewrite();
        ~LocalLabelRewrite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList label_data; //type: list of  uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::RewriteId::RewriteId_::LocalLabelRewrite


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi : public Entity
{
    public:
        AssociatedFpi();
        ~AssociatedFpi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Fpi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi
        class ApplicationOwner; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner> > application_owner;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi> fpi;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi : public Entity
{
    public:
        Fpi();
        ~Fpi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fpi_type; //type: MgmtLsdFpiEnum
        class LabelData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData
        class TeData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData
        class DmtcExtIntfData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData> dmtc_ext_intf_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData> label_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData> te_data;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData : public Entity
{
    public:
        LabelData();
        ~LabelData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf label; //type: uint32
        YLeaf security_id; //type: uint32
        YLeaf elc; //type: int32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::LabelData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData : public Entity
{
    public:
        TeData();
        ~TeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_interface; //type: string
        YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::TeData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf version; //type: uint32
        YLeaf sr_local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf router_flags; //type: uint32
        YLeaf prefix_len; //type: uint8
        YLeaf version; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData : public Entity
{
    public:
        PwListData();
        ~PwListData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pwhe_list_id; //type: uint16

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::PwListData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData : public Entity
{
    public:
        DmtcExtIntfData();
        ~DmtcExtIntfData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dmtc_ext_ifh; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::Fpi::DmtcExtIntfData


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner : public Entity
{
    public:
        ApplicationOwner();
        ~ApplicationOwner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::AssociatedFpi::ApplicationOwner


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf : public Entity
{
    public:
        V4Rpf();
        ~V4Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf v4_rpf_neighbor; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V4Rpf


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf : public Entity
{
    public:
        V6Rpf();
        ~V6Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf v6_rpf_neighbor; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::V6Rpf


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois : public Entity
{
    public:
        Mois();
        ~Mois();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ApplicationResource; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource
        class MoiArray; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource> application_resource;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray> > moi_array;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource : public Entity
{
    public:
        ApplicationResource();
        ~ApplicationResource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf application_name; //type: string
        YLeaf application_type; //type: MgmtLsdAppEnum
        YLeaf application_role_primary; //type: int32
        YLeaf application_instance; //type: string
        YLeaf resource_state; //type: MgmtLsdAppRsrcStateEnum

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::ApplicationResource


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray : public Entity
{
    public:
        MoiArray();
        ~MoiArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Moi; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi> moi;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi : public Entity
{
    public:
        Moi();
        ~Moi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf moi_type; //type: MgmtLsdMoiEnum
        class PopAndLookupIpv4; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4
        class PopAndLookupTp; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp
        class PopAndLookupIpv6; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6
        class Ipv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data
        class Ipv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data
        class Tev4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data
        class PseudowireData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData
        class IpSubData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData
        class PseudowireHeadEndData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData
        class PwListData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData
        class Stackv4Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data
        class Stackv6Data; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data
        class TeHeadData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData
        class DmtcData; //type: MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData

        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::DmtcData> dmtc_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::IpSubData> ip_sub_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data> ipv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data> ipv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4> pop_and_lookup_ipv4;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6> pop_and_lookup_ipv6;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp> pop_and_lookup_tp;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData> pseudowire_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireHeadEndData> pseudowire_head_end_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PwListData> pw_list_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv4Data> stackv4_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Stackv6Data> stackv6_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::TeHeadData> te_head_data;
        std::shared_ptr<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data> tev4_data;
        
}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4 : public Entity
{
    public:
        PopAndLookupIpv4();
        ~PopAndLookupIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv4


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp : public Entity
{
    public:
        PopAndLookupTp();
        ~PopAndLookupTp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupTp


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6 : public Entity
{
    public:
        PopAndLookupIpv6();
        ~PopAndLookupIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PopAndLookupIpv6


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data : public Entity
{
    public:
        Ipv4Data();
        ~Ipv4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_interface_parent; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf load_metric; //type: uint32
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf tunnel_id; //type: uint16
        YLeaf next_hop_id; //type: uint32
        YLeaf local_label; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data : public Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv6_next_hop; //type: string
        YLeaf path_id; //type: uint8
        YLeaf backup_path_id; //type: uint8
        YLeaf next_hop_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Ipv6Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data : public Entity
{
    public:
        Tev4Data();
        ~Tev4Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf out_label_name; //type: string
        YLeaf ipv4_next_hop; //type: string
        YLeaf backup_interface; //type: string
        YLeaf backup_ipv4_next_hop; //type: string
        YLeaf merge_point_label; //type: uint32
        YLeaf backup_local_label; //type: uint32
        YLeaf tunnel_interface; //type: string
        YLeaf tunnel_weight; //type: uint32
        YLeaf data_out_parent_interface; //type: string
        YLeaf tunnel_class; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::Tev4Data


class MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData : public Entity
{
    public:
        PseudowireData();
        ~PseudowireData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf table_id; //type: uint32
        YLeaf table_name; //type: string
        YLeaf path_flags_decode; //type: string
        YLeaf out_interface; //type: string
        YLeaf out_label; //type: uint32
        YLeaf cross_connect_id; //type: uint32
        YLeaf pseuodo_wire_connect_id; //type: uint32
        YLeaf ipv4_next_hop; //type: string
        YLeaf bridge_id; //type: uint32
        YLeaf split_horizon_id; //type: uint32

}; // MplsLsd::Rewrite::RewriteLabels::RewriteLabel::Mois::MoiArray::Moi::PseudowireData


}
}

#endif /* _CISCO_IOS_XR_MPLS_LSD_OPER_4_ */

