#ifndef _CISCO_IPSEC_MIB_
#define _CISCO_IPSEC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IPSEC_MIB {

class CISCOIPSECMIB : public ydk::Entity
{
    public:
        CISCOIPSECMIB();
        ~CISCOIPSECMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Cipsisakmpgroup; //type: CISCOIPSECMIB::Cipsisakmpgroup
        class Cipsipsecglobals; //type: CISCOIPSECMIB::Cipsipsecglobals
        class Cipsipsecstatistics; //type: CISCOIPSECMIB::Cipsipsecstatistics
        class Cipssyscapacitygroup; //type: CISCOIPSECMIB::Cipssyscapacitygroup
        class Cipstrapcntlgroup; //type: CISCOIPSECMIB::Cipstrapcntlgroup
        class Cipsisakmppolicytable; //type: CISCOIPSECMIB::Cipsisakmppolicytable
        class Cipsstaticcryptomapsettable; //type: CISCOIPSECMIB::Cipsstaticcryptomapsettable
        class Cipsdynamiccryptomapsettable; //type: CISCOIPSECMIB::Cipsdynamiccryptomapsettable
        class Cipsstaticcryptomaptable; //type: CISCOIPSECMIB::Cipsstaticcryptomaptable
        class Cipscryptomapsetiftable; //type: CISCOIPSECMIB::Cipscryptomapsetiftable

        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipscryptomapsetiftable> cipscryptomapsetiftable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsdynamiccryptomapsettable> cipsdynamiccryptomapsettable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsipsecglobals> cipsipsecglobals;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsipsecstatistics> cipsipsecstatistics;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsisakmpgroup> cipsisakmpgroup;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsisakmppolicytable> cipsisakmppolicytable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsstaticcryptomapsettable> cipsstaticcryptomapsettable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsstaticcryptomaptable> cipsstaticcryptomaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipssyscapacitygroup> cipssyscapacitygroup;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipstrapcntlgroup> cipstrapcntlgroup;
        
}; // CISCOIPSECMIB


class CISCOIPSECMIB::Cipscryptomapsetiftable : public ydk::Entity
{
    public:
        Cipscryptomapsetiftable();
        ~Cipscryptomapsetiftable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipscryptomapsetifentry; //type: CISCOIPSECMIB::Cipscryptomapsetiftable::Cipscryptomapsetifentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipscryptomapsetiftable::Cipscryptomapsetifentry> > cipscryptomapsetifentry;
        
}; // CISCOIPSECMIB::Cipscryptomapsetiftable


class CISCOIPSECMIB::Cipscryptomapsetiftable::Cipscryptomapsetifentry : public ydk::Entity
{
    public:
        Cipscryptomapsetifentry();
        ~Cipscryptomapsetifentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: string (refers to cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::cipsstaticcryptomapsetname)
        ydk::YLeaf cipsstaticcryptomapsetname;
        ydk::YLeaf cipscryptomapsetifvirtual; //type: boolean
        ydk::YLeaf cipscryptomapsetifstatus; //type: CryptomapSetBindStatus

}; // CISCOIPSECMIB::Cipscryptomapsetiftable::Cipscryptomapsetifentry


class CISCOIPSECMIB::Cipsdynamiccryptomapsettable : public ydk::Entity
{
    public:
        Cipsdynamiccryptomapsettable();
        ~Cipsdynamiccryptomapsettable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipsdynamiccryptomapsetentry; //type: CISCOIPSECMIB::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry> > cipsdynamiccryptomapsetentry;
        
}; // CISCOIPSECMIB::Cipsdynamiccryptomapsettable


class CISCOIPSECMIB::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry : public ydk::Entity
{
    public:
        Cipsdynamiccryptomapsetentry();
        ~Cipsdynamiccryptomapsetentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsdynamiccryptomapsetname; //type: string
        ydk::YLeaf cipsdynamiccryptomapsetsize; //type: uint32
        ydk::YLeaf cipsdynamiccryptomapsetnumassoc; //type: uint32

}; // CISCOIPSECMIB::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry


class CISCOIPSECMIB::Cipsipsecglobals : public ydk::Entity
{
    public:
        Cipsipsecglobals();
        ~Cipsipsecglobals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipssalifetime; //type: uint32
        ydk::YLeaf cipssalifesize; //type: uint32
        ydk::YLeaf cipsnumstaticcryptomapsets; //type: uint32
        ydk::YLeaf cipsnumcetcryptomapsets; //type: uint32
        ydk::YLeaf cipsnumdynamiccryptomapsets; //type: uint32
        ydk::YLeaf cipsnumtedcryptomapsets; //type: uint32

}; // CISCOIPSECMIB::Cipsipsecglobals


class CISCOIPSECMIB::Cipsipsecstatistics : public ydk::Entity
{
    public:
        Cipsipsecstatistics();
        ~Cipsipsecstatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsnumtedprobesreceived; //type: uint32
        ydk::YLeaf cipsnumtedprobessent; //type: uint32
        ydk::YLeaf cipsnumtedfailures; //type: uint32

}; // CISCOIPSECMIB::Cipsipsecstatistics


class CISCOIPSECMIB::Cipsisakmpgroup : public ydk::Entity
{
    public:
        Cipsisakmpgroup();
        ~Cipsisakmpgroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsisakmpenabled; //type: boolean
        ydk::YLeaf cipsisakmpidentity; //type: IkeIdentityType
        ydk::YLeaf cipsisakmpkeepaliveinterval; //type: int32
        ydk::YLeaf cipsnumisakmppolicies; //type: int32

}; // CISCOIPSECMIB::Cipsisakmpgroup


class CISCOIPSECMIB::Cipsisakmppolicytable : public ydk::Entity
{
    public:
        Cipsisakmppolicytable();
        ~Cipsisakmppolicytable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipsisakmppolicyentry; //type: CISCOIPSECMIB::Cipsisakmppolicytable::Cipsisakmppolicyentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsisakmppolicytable::Cipsisakmppolicyentry> > cipsisakmppolicyentry;
        
}; // CISCOIPSECMIB::Cipsisakmppolicytable


class CISCOIPSECMIB::Cipsisakmppolicytable::Cipsisakmppolicyentry : public ydk::Entity
{
    public:
        Cipsisakmppolicyentry();
        ~Cipsisakmppolicyentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsisakmppolpriority; //type: int32
        ydk::YLeaf cipsisakmppolencr; //type: EncryptAlgo
        ydk::YLeaf cipsisakmppolhash; //type: IkeHashAlgo
        ydk::YLeaf cipsisakmppolauth; //type: IkeAuthMethod
        ydk::YLeaf cipsisakmppolgroup; //type: DiffHellmanGrp
        ydk::YLeaf cipsisakmppollifetime; //type: int32

}; // CISCOIPSECMIB::Cipsisakmppolicytable::Cipsisakmppolicyentry


class CISCOIPSECMIB::Cipsstaticcryptomapsettable : public ydk::Entity
{
    public:
        Cipsstaticcryptomapsettable();
        ~Cipsstaticcryptomapsettable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipsstaticcryptomapsetentry; //type: CISCOIPSECMIB::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry> > cipsstaticcryptomapsetentry;
        
}; // CISCOIPSECMIB::Cipsstaticcryptomapsettable


class CISCOIPSECMIB::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry : public ydk::Entity
{
    public:
        Cipsstaticcryptomapsetentry();
        ~Cipsstaticcryptomapsetentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsstaticcryptomapsetname; //type: string
        ydk::YLeaf cipsstaticcryptomapsetsize; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumisakmp; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnummanual; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumcet; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumdynamic; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumdisc; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumsas; //type: uint32

}; // CISCOIPSECMIB::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry


class CISCOIPSECMIB::Cipsstaticcryptomaptable : public ydk::Entity
{
    public:
        Cipsstaticcryptomaptable();
        ~Cipsstaticcryptomaptable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipsstaticcryptomapentry; //type: CISCOIPSECMIB::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry> > cipsstaticcryptomapentry;
        
}; // CISCOIPSECMIB::Cipsstaticcryptomaptable


class CISCOIPSECMIB::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry : public ydk::Entity
{
    public:
        Cipsstaticcryptomapentry();
        ~Cipsstaticcryptomapentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: string (refers to cisco_ios_xe::CISCO_IPSEC_MIB::CISCOIPSECMIB::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::cipsstaticcryptomapsetname)
        ydk::YLeaf cipsstaticcryptomapsetname;
        ydk::YLeaf cipsstaticcryptomappriority; //type: int32
        ydk::YLeaf cipsstaticcryptomaptype; //type: CryptomapType
        ydk::YLeaf cipsstaticcryptomapdescr; //type: string
        ydk::YLeaf cipsstaticcryptomappeer; //type: binary
        ydk::YLeaf cipsstaticcryptomapnumpeers; //type: int32
        ydk::YLeaf cipsstaticcryptomappfs; //type: DiffHellmanGrp
        ydk::YLeaf cipsstaticcryptomaplifetime; //type: int32
        ydk::YLeaf cipsstaticcryptomaplifesize; //type: int32
        ydk::YLeaf cipsstaticcryptomaplevelhost; //type: boolean

}; // CISCOIPSECMIB::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry


class CISCOIPSECMIB::Cipssyscapacitygroup : public ydk::Entity
{
    public:
        Cipssyscapacitygroup();
        ~Cipssyscapacitygroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsmaxsas; //type: int32
        ydk::YLeaf cips3descapable; //type: boolean

}; // CISCOIPSECMIB::Cipssyscapacitygroup


class CISCOIPSECMIB::Cipstrapcntlgroup : public ydk::Entity
{
    public:
        Cipstrapcntlgroup();
        ~Cipstrapcntlgroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipscntlisakmppolicyadded; //type: TrapStatus
        ydk::YLeaf cipscntlisakmppolicydeleted; //type: TrapStatus
        ydk::YLeaf cipscntlcryptomapadded; //type: TrapStatus
        ydk::YLeaf cipscntlcryptomapdeleted; //type: TrapStatus
        ydk::YLeaf cipscntlcryptomapsetattached; //type: TrapStatus
        ydk::YLeaf cipscntlcryptomapsetdetached; //type: TrapStatus
        ydk::YLeaf cipscntltoomanysas; //type: TrapStatus

}; // CISCOIPSECMIB::Cipstrapcntlgroup

class CryptomapType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cryptomapTypeNONE;
        static const ydk::Enum::YLeaf cryptomapTypeMANUAL;
        static const ydk::Enum::YLeaf cryptomapTypeISAKMP;
        static const ydk::Enum::YLeaf cryptomapTypeCET;
        static const ydk::Enum::YLeaf cryptomapTypeDYNAMIC;
        static const ydk::Enum::YLeaf cryptomapTypeDYNAMICDISCOVERY;

};

class IkeHashAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha;

};

class TrapStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class IkeAuthMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf preSharedKey;
        static const ydk::Enum::YLeaf rsaSig;
        static const ydk::Enum::YLeaf rsaEncrypt;
        static const ydk::Enum::YLeaf revPublicKey;

};

class DiffHellmanGrp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf dhGroup1;
        static const ydk::Enum::YLeaf dhGroup2;

};

class CryptomapSetBindStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf attached;
        static const ydk::Enum::YLeaf detached;

};

class EncryptAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf des;
        static const ydk::Enum::YLeaf des3;

};

class IkeIdentityType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isakmpIdTypeUNKNOWN;
        static const ydk::Enum::YLeaf isakmpIdTypeADDRESS;
        static const ydk::Enum::YLeaf isakmpIdTypeHOSTNAME;

};


}
}

#endif /* _CISCO_IPSEC_MIB_ */

