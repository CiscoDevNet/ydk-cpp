#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_4_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_oper {


class MplsLdp::Global::Active::BindingsSummaryAll::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::BindingsSummaryAll::Vrf


class MplsLdp::Global::Active::BindingsSummaryAll::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32



}; // MplsLdp::Global::Active::BindingsSummaryAll::BindAf


class MplsLdp::Global::Active::AtoMdbTableEntries : public Entity
{
    public:
        AtoMdbTableEntries();
        ~AtoMdbTableEntries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AtoMdbTableEntry; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry> > ato_mdb_table_entry;


}; // MplsLdp::Global::Active::AtoMdbTableEntries


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry : public Entity
{
    public:
        AtoMdbTableEntry();
        ~AtoMdbTableEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_id; //type: string
        YLeaf fe_ctype; //type: int32
        YLeaf pw_id; //type: int32
        YLeaf agi_type; //type: int32
        YLeaf agi; //type: int32
        YLeaf saii_type; //type: int32
        YLeaf saii_local_id; //type: string
        YLeaf saii_global_id; //type: int32
        YLeaf saii_prefix; //type: string
        YLeaf saii_ac_id; //type: int32
        YLeaf taii_type; //type: int32
        YLeaf taii_local_id; //type: string
        YLeaf taii_global_id; //type: int32
        YLeaf taii_prefix; //type: string
        YLeaf taii_ac_id; //type: int32
        YLeaf peer_id_xr; //type: string
        YLeaf mapping_tlv_count; //type: uint32
        YLeaf notification_tlv_count; //type: uint32

        class FecInfo; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo> fec_info;


}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo : public Entity
{
    public:
        FecInfo();
        ~FecInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fe_ctype; //type: L2VpnLdpPwFecEnum

        class Fec128; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128
        class Fec129; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129
        class Fec130; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128> fec128;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129> fec129;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130> fec130;


}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128 : public Entity
{
    public:
        Fec128();
        ~Fec128();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pseudowire_id; //type: uint32



}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec128


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129 : public Entity
{
    public:
        Fec129();
        ~Fec129();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Agi; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi
        class Saii; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii
        class Taii; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi> agi;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii> saii;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii> taii;


}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi : public Entity
{
    public:
        Agi();
        ~Agi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf agi_type; //type: L2VpnLdpPwAgiEnum

        class Agi1; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1> agi1;


}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1 : public Entity
{
    public:
        Agi1();
        ~Agi1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: uint64



}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Agi::Agi1


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii : public Entity
{
    public:
        Saii();
        ~Saii();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aii_type; //type: L2VpnLdpPwAiiEnum

        class Aii1; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1
        class Aii2; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1> aii1;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2> aii2;


}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1 : public Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_id; //type: string



}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii1


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2 : public Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gobal_id; //type: uint32
        YLeaf prefix; //type: uint32
        YLeaf ac_id; //type: uint32



}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Saii::Aii2


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii : public Entity
{
    public:
        Taii();
        ~Taii();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aii_type; //type: L2VpnLdpPwAiiEnum

        class Aii1; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1
        class Aii2; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1> aii1;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2> aii2;


}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1 : public Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_id; //type: string



}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii1


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2 : public Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gobal_id; //type: uint32
        YLeaf prefix; //type: uint32
        YLeaf ac_id; //type: uint32



}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec129::Taii::Aii2


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130 : public Entity
{
    public:
        Fec130();
        ~Fec130();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Agi; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi
        class Saii; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi> agi;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii> saii;


}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi : public Entity
{
    public:
        Agi();
        ~Agi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf agi_type; //type: L2VpnLdpPwAgiEnum

        class Agi1; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1> agi1;


}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1 : public Entity
{
    public:
        Agi1();
        ~Agi1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: uint64



}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Agi::Agi1


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii : public Entity
{
    public:
        Saii();
        ~Saii();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aii_type; //type: L2VpnLdpPwAiiEnum

        class Aii1; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1
        class Aii2; //type: MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1> aii1;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2> aii2;


}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1 : public Entity
{
    public:
        Aii1();
        ~Aii1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_id; //type: string



}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii1


class MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2 : public Entity
{
    public:
        Aii2();
        ~Aii2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gobal_id; //type: uint32
        YLeaf prefix; //type: uint32
        YLeaf ac_id; //type: uint32



}; // MplsLdp::Global::Active::AtoMdbTableEntries::AtoMdbTableEntry::FecInfo::Fec130::Saii::Aii2


class MplsLdp::Global::Active::NsrSummaryAll : public Entity
{
    public:
        NsrSummaryAll();
        ~NsrSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: MplsLdp::Global::Active::NsrSummaryAll::Vrf
        class Sessions; //type: MplsLdp::Global::Active::NsrSummaryAll::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::NsrSummaryAll::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::NsrSummaryAll::Vrf> vrf;


}; // MplsLdp::Global::Active::NsrSummaryAll


class MplsLdp::Global::Active::NsrSummaryAll::Vrf : public Entity
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


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::NsrSummaryAll::Vrf


class MplsLdp::Global::Active::NsrSummaryAll::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total; //type: uint32
        YLeaf nsr_eligible; //type: uint32
        YLeaf nsr_state_none; //type: uint32
        YLeaf nsr_state_wait; //type: uint32
        YLeaf nsr_state_ready; //type: uint32
        YLeaf nsr_state_prepare; //type: uint32
        YLeaf nsr_state_app_wait; //type: uint32
        YLeaf nsr_state_operational; //type: uint32
        YLeaf nsr_state_tcp_phase1; //type: uint32
        YLeaf nsr_state_tcp_phase2; //type: uint32



}; // MplsLdp::Global::Active::NsrSummaryAll::Sessions


class MplsLdp::Global::Active::Summary : public Entity
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


        YLeaf number_of_vrf; //type: uint32
        YLeaf number_of_vrf_oper; //type: uint32
        YLeaf number_of_interfaces; //type: uint32
        YLeaf number_of_fwd_ref_interfaces; //type: uint32
        YLeaf number_of_autocfg_interfaces; //type: uint32
        YLeaf is_bound_with_sysdb; //type: boolean
        YLeaf is_registered_with_sysdb; //type: boolean
        YLeaf is_bound_with_rsi; //type: boolean
        YLeaf is_bound_with_interface_manager; //type: boolean
        YLeaf is_registered_with_interface_manager; //type: boolean
        YLeaf is_bound_with_ip_arm; //type: boolean
        YLeaf is_bound_with_lsd; //type: boolean
        YLeaf is_registered_with_lsd; //type: boolean
        YLeaf is_bound_with_ipv4_rib; //type: boolean
        YLeaf is_registered_with_ipv4_rib; //type: boolean
        YLeaf number_of_ipv4rib_tables; //type: uint32
        YLeaf number_of_registered_ipv4rib_tables; //type: uint32
        YLeaf is_bound_with_ipv6_rib; //type: boolean
        YLeaf is_registered_with_ipv6_rib; //type: boolean
        YLeaf number_of_ipv6rib_tables; //type: uint32
        YLeaf number_of_registered_ipv6rib_tables; //type: uint32
        YLeaf is_bound_with_atom; //type: boolean
        YLeaf is_bound_with_nsr_mate; //type: boolean
        YLeaf is_nsr_configured; //type: boolean
        YLeaf is_mldp_registered; //type: boolean

        class Common; //type: MplsLdp::Global::Active::Summary::Common

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Summary::Common> common;


}; // MplsLdp::Global::Active::Summary


class MplsLdp::Global::Active::Summary::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_families; //type: LdpAfEnum
        YLeaf number_of_ipv4af; //type: uint32
        YLeaf number_of_ipv6af; //type: uint32
        YLeaf number_of_neighbors; //type: uint32
        YLeaf number_of_nsr_synced_neighbors; //type: uint32
        YLeaf number_of_graceful_restart_neighbors; //type: uint32
        YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        YLeaf number_of_ipv4_hello_adj; //type: uint32
        YLeaf number_of_ipv6_hello_adj; //type: uint32
        YLeaf number_of_ipv4_routes; //type: uint32
        YLeaf number_of_ipv6_routes; //type: uint32
        YLeaf number_of_ipv4_local_addresses; //type: uint32
        YLeaf number_of_ipv6_local_addresses; //type: uint32
        YLeaf number_of_ldp_interfaces; //type: uint32
        YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        YLeaf number_of_bindings_ipv4; //type: uint32
        YLeaf number_of_bindings_ipv6; //type: uint32
        YLeaf number_of_local_bindings_ipv4; //type: uint32
        YLeaf number_of_local_bindings_ipv6; //type: uint32
        YLeaf number_of_remote_bindings_ipv4; //type: uint32
        YLeaf number_of_remote_bindings_ipv6; //type: uint32



}; // MplsLdp::Global::Active::Summary::Common


class MplsLdp::Global::Active::Vrfs : public Entity
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



        class Vrf; //type: MplsLdp::Global::Active::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf> > vrf;


}; // MplsLdp::Global::Active::Vrfs


class MplsLdp::Global::Active::Vrfs::Vrf : public Entity
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

        class GracefulRestart; //type: MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart
        class Capabilities; //type: MplsLdp::Global::Active::Vrfs::Vrf::Capabilities
        class Summary; //type: MplsLdp::Global::Active::Vrfs::Vrf::Summary
        class Afs; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs
        class NeighborBriefs; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs
        class BackoffParameters; //type: MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters
        class Backoffs; //type: MplsLdp::Global::Active::Vrfs::Vrf::Backoffs
        class Nsr; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr
        class Parameters; //type: MplsLdp::Global::Active::Vrfs::Vrf::Parameters
        class Issu; //type: MplsLdp::Global::Active::Vrfs::Vrf::Issu
        class NeighborCapabilities; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities
        class Neighbors; //type: MplsLdp::Global::Active::Vrfs::Vrf::Neighbors
        class LdpId; //type: MplsLdp::Global::Active::Vrfs::Vrf::LdpId
        class Statistics; //type: MplsLdp::Global::Active::Vrfs::Vrf::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs> afs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters> backoff_parameters;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Backoffs> backoffs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Capabilities> capabilities;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::LdpId> ldp_id;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs> neighbor_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborCapabilities> neighbor_capabilities;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Parameters> parameters;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Summary> summary;


}; // MplsLdp::Global::Active::Vrfs::Vrf


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_forwarding_state_hold_timer_running; //type: boolean
        YLeaf forwarding_state_hold_timer_remaining_seconds; //type: uint32

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_
        class GracefulRestartableNeighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor> > graceful_restartable_neighbor;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor : public Entity
{
    public:
        GracefulRestartableNeighbor();
        ~GracefulRestartableNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf connect_count; //type: uint32
        YLeaf is_neighbor_up; //type: boolean
        YLeaf is_liveness_timer_running; //type: boolean
        YLeaf liveness_timer_remaining_seconds; //type: uint32
        YLeaf is_recovery_timer_running; //type: boolean
        YLeaf recovery_timer_remaining_seconds; //type: uint32
        YLeaf down_nbr_flap_count; //type: uint8
        YLeaf down_nbr_flags; //type: uint32
        YLeaf down_nbr_down_reason; //type: uint32

        class GrPeer; //type: MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer
        class DownNbrInterface; //type: MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface
        class DownNbrAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress> > down_nbr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface> > down_nbr_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer> gr_peer;


}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer : public Entity
{
    public:
        GrPeer();
        ~GrPeer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface : public Entity
{
    public:
        DownNbrInterface();
        ~DownNbrInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfIdEnum
        YLeaf interface_handle; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface


class MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress : public Entity
{
    public:
        DownNbrAddress();
        ~DownNbrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Capabilities : public Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Capability; //type: MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability> > capability;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Capabilities


class MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability : public Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf capability_type; //type: int32
        YLeaf capability_owner; //type: string

        class Capability_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_> capability;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability


class MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_ : public Entity
{
    public:
        Capability_();
        ~Capability_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Capabilities::Capability::Capability_


class MplsLdp::Global::Active::Vrfs::Vrf::Summary : public Entity
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



        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_
        class Common; //type: MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common> common;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Summary


class MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Summary::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_families; //type: LdpAfEnum
        YLeaf number_of_ipv4af; //type: uint32
        YLeaf number_of_ipv6af; //type: uint32
        YLeaf number_of_neighbors; //type: uint32
        YLeaf number_of_nsr_synced_neighbors; //type: uint32
        YLeaf number_of_graceful_restart_neighbors; //type: uint32
        YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        YLeaf number_of_ipv4_hello_adj; //type: uint32
        YLeaf number_of_ipv6_hello_adj; //type: uint32
        YLeaf number_of_ipv4_routes; //type: uint32
        YLeaf number_of_ipv6_routes; //type: uint32
        YLeaf number_of_ipv4_local_addresses; //type: uint32
        YLeaf number_of_ipv6_local_addresses; //type: uint32
        YLeaf number_of_ldp_interfaces; //type: uint32
        YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        YLeaf number_of_bindings_ipv4; //type: uint32
        YLeaf number_of_bindings_ipv6; //type: uint32
        YLeaf number_of_local_bindings_ipv4; //type: uint32
        YLeaf number_of_local_bindings_ipv6; //type: uint32
        YLeaf number_of_remote_bindings_ipv4; //type: uint32
        YLeaf number_of_remote_bindings_ipv6; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Summary::Common


class MplsLdp::Global::Active::Vrfs::Vrf::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Af; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af> > af;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MplsLdpOperAfNameEnum

        class InterfaceSummary; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary
        class Bindings; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings
        class Igp; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp
        class BindingsSummary; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary
        class Interfaces; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces
        class Discovery; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery
        class BindingsSummaryAll; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll
        class Forwardings; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings
        class BindingsAdvertiseSpec; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec
        class ForwardingSummary; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings> bindings;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec> bindings_advertise_spec;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary> bindings_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery> discovery;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary> forwarding_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings> forwardings;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp> igp;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary> interface_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces> interfaces;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary : public Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf known_ip_interface_count; //type: uint32
        YLeaf known_ip_interface_ldp_enabled; //type: uint32
        YLeaf ldp_configured_attached_interface; //type: uint32
        YLeaf ldp_configured_te_interface; //type: uint32
        YLeaf forward_references; //type: uint32
        YLeaf auto_config_disabled; //type: uint32
        YLeaf auto_config; //type: uint32
        YLeaf auto_config_forward_reference_interfaces; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::InterfaceSummary


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings : public Entity
{
    public:
        Bindings();
        ~Bindings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding> > binding;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf local_label; //type: uint32
        YLeaf le_local_binding_revision; //type: uint32
        YLeaf le_local_label_state; //type: LocalLabelStateEnum
        YLeaf is_no_route; //type: boolean
        YLeaf label_oor; //type: boolean
        YLeaf advertise_prefix_acl; //type: string
        YLeaf advertise_tsr_acl; //type: string
        YLeaf config_enforced_local_label_value; //type: boolean
        YLeaf is_elc; //type: boolean

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_
        class PrefixXr; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr
        class RemoteBinding; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding
        class PeersAdvertisedTo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo
        class PeersAcked; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked> > peers_acked;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo> > peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr> prefix_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding> > remote_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr : public Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PrefixXr


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding : public Entity
{
    public:
        RemoteBinding();
        ~RemoteBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_label; //type: uint32
        YLeaf is_stale; //type: boolean
        YLeaf is_elc; //type: boolean

        class AssigningPeerLdpIdent; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent> assigning_peer_ldp_ident;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent : public Entity
{
    public:
        AssigningPeerLdpIdent();
        ~AssigningPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo : public Entity
{
    public:
        PeersAdvertisedTo();
        ~PeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked : public Entity
{
    public:
        PeersAcked();
        ~PeersAcked();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Bindings::Binding::PeersAcked


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Syncs; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs
        class SyncDelayRestart; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart> sync_delay_restart;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs> syncs;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs : public Entity
{
    public:
        Syncs();
        ~Syncs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sync; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync> > sync;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync : public Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf igp_sync_state; //type: LdpIgpSyncStateEnum
        YLeaf igp_sync_delay; //type: uint32
        YLeaf is_delay_timer_running; //type: boolean
        YLeaf delay_timer_remaining; //type: uint32
        YLeaf igp_sync_down_reason; //type: LdpIgpSyncDownReasonEnum

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_
        class Peers; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers
        class GrOnlyPeer; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer> > gr_only_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers> > peers;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_id; //type: string
        YLeaf is_gr_enabled; //type: boolean



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::Peers


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer : public Entity
{
    public:
        GrOnlyPeer();
        ~GrOnlyPeer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_id; //type: string
        YLeaf is_chkpt_created; //type: boolean



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart : public Entity
{
    public:
        SyncDelayRestart();
        ~SyncDelayRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured; //type: boolean
        YLeaf delay_secs; //type: uint32
        YLeaf timer_running; //type: boolean
        YLeaf remaining_secs; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Igp::SyncDelayRestart


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary : public Entity
{
    public:
        BindingsSummary();
        ~BindingsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_
        class BindAf; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummary::BindAf


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface> > interface;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf ldp_enabled; //type: boolean
        YLeaf is_im_stale; //type: boolean
        YLeaf ldp_config_mode; //type: boolean
        YLeaf ldp_autoconfig_disable; //type: boolean

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_
        class TeMeshGrp; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp
        class AutoConfig; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig> > auto_config;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp> > te_mesh_grp;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp : public Entity
{
    public:
        TeMeshGrp();
        ~TeMeshGrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ldp_te_mesh_group_all_cfgd; //type: boolean
        YLeaf ldp_mesh_group_enabled; //type: boolean
        YLeaf te_mesh_group_id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::TeMeshGrp


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig : public Entity
{
    public:
        AutoConfig();
        ~AutoConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tuple; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Interfaces::Interface::AutoConfig


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHellos; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos
        class Summary; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary
        class TargetedHellos; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos
        class Brief; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief
        class Stats; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos> link_hellos;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats> stats;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos> targeted_hellos;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos : public Entity
{
    public:
        LinkHellos();
        ~LinkHellos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHello; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello> > link_hello;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello : public Entity
{
    public:
        LinkHello();
        ~LinkHello();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hello; //type: uint32
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf quick_start_disabled; //type: boolean

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_
        class HelloInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation
        class DiscoveryLinkAf; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf> > discovery_link_af;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf is_no_route; //type: boolean
        YLeaf hold_time; //type: uint32
        YLeaf local_hold_time; //type: uint32
        YLeaf neighbor_hold_time; //type: uint32
        YLeaf disc_expiry; //type: uint32
        YLeaf is_targeted; //type: boolean
        YLeaf session_up; //type: boolean
        YLeaf established_time; //type: uint64
        YLeaf established_age; //type: uint64
        YLeaf session_bringup_failure_reason; //type: string

        class NeighborSrcAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress
        class NeighborTransportAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress
        class Target; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target
        class LastSessionDownInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo> > last_session_down_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress> neighbor_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress> neighbor_transport_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target> target;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress : public Entity
{
    public:
        NeighborSrcAddress();
        ~NeighborSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress : public Entity
{
    public:
        NeighborTransportAddress();
        ~NeighborTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf : public Entity
{
    public:
        DiscoveryLinkAf();
        ~DiscoveryLinkAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32

        class LocalSrcAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress
        class LocalTransportAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress> local_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress> local_transport_address;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress : public Entity
{
    public:
        LocalSrcAddress();
        ~LocalSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress : public Entity
{
    public:
        LocalTransportAddress();
        ~LocalTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary : public Entity
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


        YLeaf local_ldp_id; //type: string
        YLeaf num_of_ldp_interfaces; //type: uint32
        YLeaf num_of_active_ldp_interfaces; //type: uint32
        YLeaf num_of_lnk_disc_xmit; //type: uint32
        YLeaf num_of_tgt_disc_xmit; //type: uint32
        YLeaf num_of_lnk_disc_recv; //type: uint32
        YLeaf num_of_tgt_disc_recv; //type: uint32
        YLeaf num_of_disc_with_bad_addr_recv; //type: uint32
        YLeaf num_of_disc_with_bad_hello_pdu; //type: uint32
        YLeaf num_of_disc_with_bad_xport_addr; //type: uint32
        YLeaf num_of_disc_with_same_router_id; //type: uint32
        YLeaf num_of_disc_with_wrong_router_id; //type: uint32

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Summary::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos : public Entity
{
    public:
        TargetedHellos();
        ~TargetedHellos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TargetedHello; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello> > targeted_hello;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello : public Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address; //type: string
        YLeaf target_address; //type: string
        YLeaf state; //type: DhcbStateEnum
        YLeaf adjacency_ldp_identifier; //type: string
        YLeaf interval; //type: uint32
        YLeaf next_hello; //type: uint32
        YLeaf hold_time; //type: uint32
        YLeaf local_hold_time; //type: uint32
        YLeaf neighbor_hold_time; //type: uint32
        YLeaf disc_expiry; //type: uint32
        YLeaf quick_start_disabled; //type: boolean
        YLeaf established_time; //type: uint64
        YLeaf established_age; //type: uint64
        YLeaf session_up; //type: boolean
        YLeaf session_bringup_failure_reason; //type: string

        class DhcbLocalAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress
        class DhcbTargetAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress
        class LastSessionDownInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress> dhcb_local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo> > last_session_down_info;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress : public Entity
{
    public:
        DhcbLocalAddress();
        ~DhcbLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHelloBriefs; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs
        class TargetedHelloBriefs; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs> link_hello_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs> targeted_hello_briefs;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs : public Entity
{
    public:
        LinkHelloBriefs();
        ~LinkHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHelloBrief; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief> > link_hello_brief;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief : public Entity
{
    public:
        LinkHelloBrief();
        ~LinkHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf address_family; //type: LdpAfEnum
        YLeaf address_family_set; //type: LdpAfEnum
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_
        class HelloInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs : public Entity
{
    public:
        TargetedHelloBriefs();
        ~TargetedHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TargetedHelloBrief; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief> > targeted_hello_brief;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief : public Entity
{
    public:
        TargetedHelloBrief();
        ~TargetedHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address; //type: string
        YLeaf target_address; //type: string
        YLeaf address_family; //type: LdpAfEnum

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_
        class DhcbTargetAddress; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress
        class HelloInformation; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Stat; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat> > stat;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat : public Entity
{
    public:
        Stat();
        ~Stat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf adjacency_group_up_time; //type: uint32
        YLeaf tcp_open_count; //type: uint32
        YLeaf tcp_arb_chg_count; //type: uint32
        YLeaf tcp_role; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Discovery::Stats::Stat


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll : public Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_
        class BindAf; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsSummaryAll::BindAf


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings : public Entity
{
    public:
        Forwardings();
        ~Forwardings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Forwarding; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding> > forwarding;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf table_id; //type: uint32
        YLeaf prefix_length; //type: uint8

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_
        class PrefixXr; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr
        class Route; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route
        class Paths; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths> > paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr> prefix_xr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route> route;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr : public Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::PrefixXr


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Routing; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing
        class Mpls; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing> routing;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf version; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf source; //type: uint16
        YLeaf type; //type: uint16
        YLeaf flags; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf is_local_vrf_leaked; //type: boolean
        YLeaf routing_update_count; //type: uint32
        YLeaf routing_update_timestamp; //type: uint64
        YLeaf routing_update_age; //type: uint64
        YLeaf sr_local_label; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label; //type: uint32
        YLeaf forwarding_update_count; //type: uint32
        YLeaf forwarding_update_timestamp; //type: uint64
        YLeaf forwarding_update_age; //type: uint64



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Routing; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing
        class Mpls; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing> routing;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf interface_name; //type: string
        YLeaf nh_is_overriden; //type: boolean
        YLeaf nexthop_id; //type: uint32
        YLeaf next_hop_table_id; //type: uint32
        YLeaf flags; //type: uint32
        YLeaf load_metric; //type: uint32
        YLeaf path_id; //type: uint8
        YLeaf bkup_path_id; //type: uint8
        YLeaf path_flags; //type: LdpRoutePathFlagsEnum

        class NextHop; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop
        class RemoteLfa; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa> remote_lfa;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf has_remote_lfa_bkup; //type: boolean
        YLeaf needs_tldp; //type: boolean
        YLeaf has_q_node; //type: boolean

        class RemotePNodeId; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId
        class RemoteQNodeId; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId> remote_p_node_id;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId> remote_q_node_id;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId : public Entity
{
    public:
        RemotePNodeId();
        ~RemotePNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId : public Entity
{
    public:
        RemoteQNodeId();
        ~RemoteQNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MplsOutgoingInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo
        class RemoteLfa; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo> mpls_outgoing_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa> remote_lfa;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo : public Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_label; //type: uint32
        YLeaf out_label_rsn; //type: LdpFwdUnlblRsnEnum
        YLeaf out_label_type; //type: LabelValueEnum
        YLeaf out_label_owner; //type: LdpRoutePathLblOwnerEnum
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean

        class NexthopPeerLdpIdent; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent : public Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf has_remote_lfa_bkup; //type: boolean

        class MplsOutgoingInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo> mpls_outgoing_info;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo : public Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Stack; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack> > stack;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_label; //type: uint32
        YLeaf out_label_rsn; //type: LdpFwdUnlblRsnEnum
        YLeaf out_label_type; //type: LabelValueEnum
        YLeaf out_label_owner; //type: LdpRoutePathLblOwnerEnum
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean

        class NexthopPeerLdpIdent; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent : public Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec : public Entity
{
    public:
        BindingsAdvertiseSpec();
        ~BindingsAdvertiseSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AllocationAcl; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl
        class AdvtAcl; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl> > advt_acl;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl> allocation_acl;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl : public Entity
{
    public:
        AllocationAcl();
        ~AllocationAcl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf has_acl; //type: boolean
        YLeaf prefix_acl; //type: string
        YLeaf is_host_route_only; //type: boolean



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl : public Entity
{
    public:
        AdvtAcl();
        ~AdvtAcl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_acl; //type: string
        YLeaf peer_acl; //type: string



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary : public Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_lsd_bound; //type: boolean
        YLeaf fsht; //type: uint16
        YLeaf intfs; //type: uint16
        YLeaf lbls; //type: uint16

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_
        class Rws; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws> rws;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws : public Entity
{
    public:
        Rws();
        ~Rws();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pfxs; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs
        class Nhs; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs> nhs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs> pfxs;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs : public Entity
{
    public:
        Pfxs();
        ~Pfxs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_pfxs; //type: uint16
        YLeaf ecmp_pfxs; //type: uint16
        YLeaf protected_pfxs; //type: uint16

        class LabeledPfxsAggr; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr : public Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary : public Entity
{
    public:
        LabeledPfxsPrimary();
        ~LabeledPfxsPrimary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup : public Entity
{
    public:
        LabeledPfxsBackup();
        ~LabeledPfxsBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup


class MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs : public Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf protected_paths; //type: uint32
        YLeaf backup_paths; //type: uint32
        YLeaf remote_backup_paths; //type: uint32
        YLeaf labeled_paths; //type: uint32
        YLeaf labeled_backup_paths; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs : public Entity
{
    public:
        NeighborBriefs();
        ~NeighborBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborBrief; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief> > neighbor_brief;


}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief : public Entity
{
    public:
        NeighborBrief();
        ~NeighborBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf is_graceful_restartable; //type: boolean
        YLeaf nsr_state; //type: ShowNsrStateEnum
        YLeaf up_time_seconds; //type: uint32

        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_
        class NbrBrAfInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo> > nbr_br_af_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo : public Entity
{
    public:
        NbrBrAfInfo();
        ~NbrBrAfInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf num_of_nbr_discovery; //type: uint32
        YLeaf num_of_nbr_addresses; //type: uint32
        YLeaf num_of_nbr_lbl; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo


class MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters : public Entity
{
    public:
        BackoffParameters();
        ~BackoffParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initial_seconds; //type: uint32
        YLeaf maximum_seconds; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::BackoffParameters


class MplsLdp::Global::Active::Vrfs::Vrf::Backoffs : public Entity
{
    public:
        Backoffs();
        ~Backoffs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Backoff; //type: MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff> > backoff;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Backoffs


class MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff : public Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf backoff_seconds; //type: uint32
        YLeaf waiting_seconds; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Backoffs::Backoff


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NsrPending; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending
        class HaSummary; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary
        class HaStatistics; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics> ha_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary> ha_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending> nsr_pending;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending : public Entity
{
    public:
        NsrPending();
        ~NsrPending();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbors; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors> ha_neighbors;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbor; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor> > ha_neighbor;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32

        class InitSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary : public Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf_; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_
        class Sessions; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_> vrf;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Vrf_


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total; //type: uint32
        YLeaf nsr_eligible; //type: uint32
        YLeaf nsr_state_none; //type: uint32
        YLeaf nsr_state_wait; //type: uint32
        YLeaf nsr_state_ready; //type: uint32
        YLeaf nsr_state_prepare; //type: uint32
        YLeaf nsr_state_app_wait; //type: uint32
        YLeaf nsr_state_operational; //type: uint32
        YLeaf nsr_state_tcp_phase1; //type: uint32
        YLeaf nsr_state_tcp_phase2; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaSummary::Sessions


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics : public Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaGlobal; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors> ha_neighbors;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal : public Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InitSync; //type: MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync> init_sync;


}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal


class MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync : public Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_cfged; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_peers; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_pfx; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_lcl_addr_wd; //type: uint32
        YLeaf num_lbl_adv; //type: uint32
        YLeaf ipc_msg_tx_cnt; //type: uint32
        YLeaf ipc_msg_tx_bytes; //type: uint32
        YLeaf ipc_msg_rx_cnt; //type: uint32
        YLeaf ipc_msg_rx_bytes; //type: uint32
        YLeaf ipc_max_tx_batch_bytes; //type: uint32
        YLeaf ipc_max_rx_batch_bytes; //type: uint32
        YLeaf ipc_tx_fail_cnt; //type: uint32
        YLeaf total_ipc_tx_fail_cnt; //type: uint32
        YLeaf ipc_restart_cnt; //type: uint32
        YLeaf ipc_default_mtu; //type: uint32
        YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32



}; // MplsLdp::Global::Active::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_4_ */

