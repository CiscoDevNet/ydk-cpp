#ifndef _CISCO_IETF_ISIS_MIB_
#define _CISCO_IETF_ISIS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_ISIS_MIB {

class CISCOIETFISISMIB : public ydk::Entity
{
    public:
        CISCOIETFISISMIB();
        ~CISCOIETFISISMIB();

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

        class Ciisysobject; //type: CISCOIETFISISMIB::Ciisysobject
        class Ciicirc; //type: CISCOIETFISISMIB::Ciicirc
        class Ciimanareaaddrtable; //type: CISCOIETFISISMIB::Ciimanareaaddrtable
        class Ciiareaaddrtable; //type: CISCOIETFISISMIB::Ciiareaaddrtable
        class Ciisysprotsupptable; //type: CISCOIETFISISMIB::Ciisysprotsupptable
        class Ciisummaddrtable; //type: CISCOIETFISISMIB::Ciisummaddrtable
        class Ciiredistributeaddrtable; //type: CISCOIETFISISMIB::Ciiredistributeaddrtable
        class Ciiroutertable; //type: CISCOIETFISISMIB::Ciiroutertable
        class Ciisysleveltable; //type: CISCOIETFISISMIB::Ciisysleveltable
        class Ciicirctable; //type: CISCOIETFISISMIB::Ciicirctable
        class Ciicircleveltable; //type: CISCOIETFISISMIB::Ciicircleveltable
        class Ciisystemcountertable; //type: CISCOIETFISISMIB::Ciisystemcountertable
        class Ciicircuitcountertable; //type: CISCOIETFISISMIB::Ciicircuitcountertable
        class Ciipacketcountertable; //type: CISCOIETFISISMIB::Ciipacketcountertable
        class Ciiisadjtable; //type: CISCOIETFISISMIB::Ciiisadjtable
        class Ciiisadjareaaddrtable; //type: CISCOIETFISISMIB::Ciiisadjareaaddrtable
        class Ciiisadjipaddrtable; //type: CISCOIETFISISMIB::Ciiisadjipaddrtable
        class Ciiisadjprotsupptable; //type: CISCOIETFISISMIB::Ciiisadjprotsupptable
        class Ciiratable; //type: CISCOIETFISISMIB::Ciiratable
        class Ciiipratable; //type: CISCOIETFISISMIB::Ciiipratable
        class Ciilspsummarytable; //type: CISCOIETFISISMIB::Ciilspsummarytable
        class Ciilsptlvtable; //type: CISCOIETFISISMIB::Ciilsptlvtable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiareaaddrtable> ciiareaaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicirc> ciicirc;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicircleveltable> ciicircleveltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicirctable> ciicirctable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicircuitcountertable> ciicircuitcountertable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiipratable> ciiipratable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiisadjareaaddrtable> ciiisadjareaaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiisadjipaddrtable> ciiisadjipaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiisadjprotsupptable> ciiisadjprotsupptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiisadjtable> ciiisadjtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciilspsummarytable> ciilspsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciilsptlvtable> ciilsptlvtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciimanareaaddrtable> ciimanareaaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciipacketcountertable> ciipacketcountertable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiratable> ciiratable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiredistributeaddrtable> ciiredistributeaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiroutertable> ciiroutertable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciisummaddrtable> ciisummaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciisysleveltable> ciisysleveltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciisysobject> ciisysobject;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciisysprotsupptable> ciisysprotsupptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciisystemcountertable> ciisystemcountertable;
        
}; // CISCOIETFISISMIB


class CISCOIETFISISMIB::Ciiareaaddrtable : public ydk::Entity
{
    public:
        Ciiareaaddrtable();
        ~Ciiareaaddrtable();

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

        class Ciiareaaddrentry; //type: CISCOIETFISISMIB::Ciiareaaddrtable::Ciiareaaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiareaaddrtable::Ciiareaaddrentry> > ciiareaaddrentry;
        
}; // CISCOIETFISISMIB::Ciiareaaddrtable


class CISCOIETFISISMIB::Ciiareaaddrtable::Ciiareaaddrentry : public ydk::Entity
{
    public:
        Ciiareaaddrentry();
        ~Ciiareaaddrentry();

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

        ydk::YLeaf ciiareaaddr; //type: binary

}; // CISCOIETFISISMIB::Ciiareaaddrtable::Ciiareaaddrentry


class CISCOIETFISISMIB::Ciicirc : public ydk::Entity
{
    public:
        Ciicirc();
        ~Ciicirc();

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

        ydk::YLeaf ciinextcircindex; //type: uint32

}; // CISCOIETFISISMIB::Ciicirc


class CISCOIETFISISMIB::Ciicircleveltable : public ydk::Entity
{
    public:
        Ciicircleveltable();
        ~Ciicircleveltable();

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

        class Ciicirclevelentry; //type: CISCOIETFISISMIB::Ciicircleveltable::Ciicirclevelentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicircleveltable::Ciicirclevelentry> > ciicirclevelentry;
        
}; // CISCOIETFISISMIB::Ciicircleveltable


class CISCOIETFISISMIB::Ciicircleveltable::Ciicirclevelentry : public ydk::Entity
{
    public:
        Ciicirclevelentry();
        ~Ciicirclevelentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciicirclevelindex; //type: Ciicirclevelindex
        ydk::YLeaf ciicirclevelmetric; //type: int32
        ydk::YLeaf ciicirclevelwidemetric; //type: uint32
        ydk::YLeaf ciicirclevelispriority; //type: int32
        ydk::YLeaf ciicirclevelidoctet; //type: int32
        ydk::YLeaf ciicirclevelid; //type: binary
        ydk::YLeaf ciicircleveldesis; //type: binary
        ydk::YLeaf ciicirclevelhellomultiplier; //type: int32
        ydk::YLeaf ciicirclevelhellotimer; //type: int32
        ydk::YLeaf ciicircleveldrhellotimer; //type: int32
        ydk::YLeaf ciicirclevellspthrottle; //type: uint32
        ydk::YLeaf ciicirclevelminlspretransint; //type: int32
        ydk::YLeaf ciicirclevelcsnpinterval; //type: int32
        ydk::YLeaf ciicirclevelpartsnpinterval; //type: int32
        class Ciicirclevelindex;

}; // CISCOIETFISISMIB::Ciicircleveltable::Ciicirclevelentry


class CISCOIETFISISMIB::Ciicirctable : public ydk::Entity
{
    public:
        Ciicirctable();
        ~Ciicirctable();

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

        class Ciicircentry; //type: CISCOIETFISISMIB::Ciicirctable::Ciicircentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicirctable::Ciicircentry> > ciicircentry;
        
}; // CISCOIETFISISMIB::Ciicirctable


class CISCOIETFISISMIB::Ciicirctable::Ciicircentry : public ydk::Entity
{
    public:
        Ciicircentry();
        ~Ciicircentry();

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

        ydk::YLeaf ciicircindex; //type: int32
        ydk::YLeaf ciicircifindex; //type: int32
        ydk::YLeaf ciicircifsubindex; //type: int32
        ydk::YLeaf ciicircadminstate; //type: CiiAdminState
        ydk::YLeaf ciicircexiststate; //type: RowStatus
        ydk::YLeaf ciicirctype; //type: Ciicirctype
        ydk::YLeaf ciicircextdomain; //type: boolean
        ydk::YLeaf ciicirclevel; //type: Ciicirclevel
        ydk::YLeaf ciicircpassivecircuit; //type: boolean
        ydk::YLeaf ciicircmeshgroupenabled; //type: Ciicircmeshgroupenabled
        ydk::YLeaf ciicircmeshgroup; //type: uint32
        ydk::YLeaf ciicircsmallhellos; //type: boolean
        ydk::YLeaf ciicirclastuptime; //type: uint32
        ydk::YLeaf ciicirc3wayenabled; //type: boolean
        ydk::YLeaf ciicircextendedcircid; //type: uint32
        class Ciicirctype;
        class Ciicirclevel;
        class Ciicircmeshgroupenabled;

}; // CISCOIETFISISMIB::Ciicirctable::Ciicircentry


class CISCOIETFISISMIB::Ciicircuitcountertable : public ydk::Entity
{
    public:
        Ciicircuitcountertable();
        ~Ciicircuitcountertable();

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

        class Ciicircuitcounterentry; //type: CISCOIETFISISMIB::Ciicircuitcountertable::Ciicircuitcounterentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicircuitcountertable::Ciicircuitcounterentry> > ciicircuitcounterentry;
        
}; // CISCOIETFISISMIB::Ciicircuitcountertable


class CISCOIETFISISMIB::Ciicircuitcountertable::Ciicircuitcounterentry : public ydk::Entity
{
    public:
        Ciicircuitcounterentry();
        ~Ciicircuitcounterentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciicircuittype; //type: Ciicircuittype
        ydk::YLeaf ciicircadjchanges; //type: uint32
        ydk::YLeaf ciicircnumadj; //type: uint32
        ydk::YLeaf ciicircinitfails; //type: uint32
        ydk::YLeaf ciicircrejadjs; //type: uint32
        ydk::YLeaf ciicircidfieldlenmismatches; //type: uint32
        ydk::YLeaf ciicircmaxareaaddrmismatches; //type: uint32
        ydk::YLeaf ciicircauthtypefails; //type: uint32
        ydk::YLeaf ciicircauthfails; //type: uint32
        ydk::YLeaf ciicirclandesischanges; //type: uint32
        class Ciicircuittype;

}; // CISCOIETFISISMIB::Ciicircuitcountertable::Ciicircuitcounterentry


class CISCOIETFISISMIB::Ciiipratable : public ydk::Entity
{
    public:
        Ciiipratable();
        ~Ciiipratable();

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

        class Ciiipraentry; //type: CISCOIETFISISMIB::Ciiipratable::Ciiipraentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiipratable::Ciiipraentry> > ciiipraentry;
        
}; // CISCOIETFISISMIB::Ciiipratable


class CISCOIETFISISMIB::Ciiipratable::Ciiipraentry : public ydk::Entity
{
    public:
        Ciiipraentry();
        ~Ciiipraentry();

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

        ydk::YLeaf ciiipradesttype; //type: InetAddressType
        ydk::YLeaf ciiipradest; //type: binary
        ydk::YLeaf ciiipradestprefixlen; //type: uint32
        ydk::YLeaf ciiipranexthopindex; //type: int32
        ydk::YLeaf ciiipranexthoptype; //type: InetAddressType
        ydk::YLeaf ciiipranexthop; //type: binary
        ydk::YLeaf ciiipratype; //type: Ciiipratype
        ydk::YLeaf ciiipraexiststate; //type: RowStatus
        ydk::YLeaf ciiipraadminstate; //type: CiiAdminState
        ydk::YLeaf ciiiprametric; //type: int32
        ydk::YLeaf ciiiprametrictype; //type: CiiMetricType
        ydk::YLeaf ciiiprafullmetric; //type: uint32
        ydk::YLeaf ciiiprasnpaaddress; //type: binary
        ydk::YLeaf ciiiprasourcetype; //type: Ciiiprasourcetype
        class Ciiipratype;
        class Ciiiprasourcetype;

}; // CISCOIETFISISMIB::Ciiipratable::Ciiipraentry


class CISCOIETFISISMIB::Ciiisadjareaaddrtable : public ydk::Entity
{
    public:
        Ciiisadjareaaddrtable();
        ~Ciiisadjareaaddrtable();

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

        class Ciiisadjareaaddrentry; //type: CISCOIETFISISMIB::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry> > ciiisadjareaaddrentry;
        
}; // CISCOIETFISISMIB::Ciiisadjareaaddrtable


class CISCOIETFISISMIB::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry : public ydk::Entity
{
    public:
        Ciiisadjareaaddrentry();
        ~Ciiisadjareaaddrentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiisadjtable::Ciiisadjentry::ciiisadjindex)
        ydk::YLeaf ciiisadjindex;
        ydk::YLeaf ciiisadjareaaddrindex; //type: int32
        ydk::YLeaf ciiisadjareaaddress; //type: binary

}; // CISCOIETFISISMIB::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry


class CISCOIETFISISMIB::Ciiisadjipaddrtable : public ydk::Entity
{
    public:
        Ciiisadjipaddrtable();
        ~Ciiisadjipaddrtable();

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

        class Ciiisadjipaddrentry; //type: CISCOIETFISISMIB::Ciiisadjipaddrtable::Ciiisadjipaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiisadjipaddrtable::Ciiisadjipaddrentry> > ciiisadjipaddrentry;
        
}; // CISCOIETFISISMIB::Ciiisadjipaddrtable


class CISCOIETFISISMIB::Ciiisadjipaddrtable::Ciiisadjipaddrentry : public ydk::Entity
{
    public:
        Ciiisadjipaddrentry();
        ~Ciiisadjipaddrentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiisadjtable::Ciiisadjentry::ciiisadjindex)
        ydk::YLeaf ciiisadjindex;
        ydk::YLeaf ciiisadjipaddrindex; //type: int32
        ydk::YLeaf ciiisadjipaddrtype; //type: InetAddressType
        ydk::YLeaf ciiisadjipaddraddress; //type: binary

}; // CISCOIETFISISMIB::Ciiisadjipaddrtable::Ciiisadjipaddrentry


class CISCOIETFISISMIB::Ciiisadjprotsupptable : public ydk::Entity
{
    public:
        Ciiisadjprotsupptable();
        ~Ciiisadjprotsupptable();

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

        class Ciiisadjprotsuppentry; //type: CISCOIETFISISMIB::Ciiisadjprotsupptable::Ciiisadjprotsuppentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiisadjprotsupptable::Ciiisadjprotsuppentry> > ciiisadjprotsuppentry;
        
}; // CISCOIETFISISMIB::Ciiisadjprotsupptable


class CISCOIETFISISMIB::Ciiisadjprotsupptable::Ciiisadjprotsuppentry : public ydk::Entity
{
    public:
        Ciiisadjprotsuppentry();
        ~Ciiisadjprotsuppentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiisadjtable::Ciiisadjentry::ciiisadjindex)
        ydk::YLeaf ciiisadjindex;
        ydk::YLeaf ciiisadjprotsuppprotocol; //type: CiiSupportedProtocol

}; // CISCOIETFISISMIB::Ciiisadjprotsupptable::Ciiisadjprotsuppentry


class CISCOIETFISISMIB::Ciiisadjtable : public ydk::Entity
{
    public:
        Ciiisadjtable();
        ~Ciiisadjtable();

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

        class Ciiisadjentry; //type: CISCOIETFISISMIB::Ciiisadjtable::Ciiisadjentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiisadjtable::Ciiisadjentry> > ciiisadjentry;
        
}; // CISCOIETFISISMIB::Ciiisadjtable


class CISCOIETFISISMIB::Ciiisadjtable::Ciiisadjentry : public ydk::Entity
{
    public:
        Ciiisadjentry();
        ~Ciiisadjentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciiisadjindex; //type: int32
        ydk::YLeaf ciiisadjstate; //type: Ciiisadjstate
        ydk::YLeaf ciiisadj3waystate; //type: Ciiisadj3Waystate
        ydk::YLeaf ciiisadjneighsnpaaddress; //type: binary
        ydk::YLeaf ciiisadjneighsystype; //type: Ciiisadjneighsystype
        ydk::YLeaf ciiisadjneighsysid; //type: binary
        ydk::YLeaf ciiisadjnbrextendedcircid; //type: uint32
        ydk::YLeaf ciiisadjusage; //type: Ciiisadjusage
        ydk::YLeaf ciiisadjholdtimer; //type: uint32
        ydk::YLeaf ciiisadjneighpriority; //type: int32
        ydk::YLeaf ciiisadjlastuptime; //type: uint32
        class Ciiisadjstate;
        class Ciiisadj3Waystate;
        class Ciiisadjneighsystype;
        class Ciiisadjusage;

}; // CISCOIETFISISMIB::Ciiisadjtable::Ciiisadjentry


class CISCOIETFISISMIB::Ciilspsummarytable : public ydk::Entity
{
    public:
        Ciilspsummarytable();
        ~Ciilspsummarytable();

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

        class Ciilspsummaryentry; //type: CISCOIETFISISMIB::Ciilspsummarytable::Ciilspsummaryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciilspsummarytable::Ciilspsummaryentry> > ciilspsummaryentry;
        
}; // CISCOIETFISISMIB::Ciilspsummarytable


class CISCOIETFISISMIB::Ciilspsummarytable::Ciilspsummaryentry : public ydk::Entity
{
    public:
        Ciilspsummaryentry();
        ~Ciilspsummaryentry();

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

        ydk::YLeaf ciilsplevel; //type: CiiISLevel
        ydk::YLeaf ciilspid; //type: binary
        ydk::YLeaf ciilspseq; //type: uint32
        ydk::YLeaf ciilspzerolife; //type: boolean
        ydk::YLeaf ciilspchecksum; //type: uint32
        ydk::YLeaf ciilsplifetimeremain; //type: uint32
        ydk::YLeaf ciilsppdulength; //type: uint32
        ydk::YLeaf ciilspattributes; //type: uint32

}; // CISCOIETFISISMIB::Ciilspsummarytable::Ciilspsummaryentry


class CISCOIETFISISMIB::Ciilsptlvtable : public ydk::Entity
{
    public:
        Ciilsptlvtable();
        ~Ciilsptlvtable();

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

        class Ciilsptlventry; //type: CISCOIETFISISMIB::Ciilsptlvtable::Ciilsptlventry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciilsptlvtable::Ciilsptlventry> > ciilsptlventry;
        
}; // CISCOIETFISISMIB::Ciilsptlvtable


class CISCOIETFISISMIB::Ciilsptlvtable::Ciilsptlventry : public ydk::Entity
{
    public:
        Ciilsptlventry();
        ~Ciilsptlventry();

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

        ydk::YLeaf ciilsplevel; //type: CiiISLevel
        //type: binary (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciilspsummarytable::Ciilspsummaryentry::ciilspid)
        ydk::YLeaf ciilspid;
        ydk::YLeaf ciilsptlvindex; //type: uint32
        ydk::YLeaf ciilsptlvseq; //type: uint32
        ydk::YLeaf ciilsptlvchecksum; //type: uint32
        ydk::YLeaf ciilsptlvtype; //type: uint32
        ydk::YLeaf ciilsptlvlen; //type: uint32
        ydk::YLeaf ciilsptlvvalue; //type: binary

}; // CISCOIETFISISMIB::Ciilsptlvtable::Ciilsptlventry


class CISCOIETFISISMIB::Ciimanareaaddrtable : public ydk::Entity
{
    public:
        Ciimanareaaddrtable();
        ~Ciimanareaaddrtable();

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

        class Ciimanareaaddrentry; //type: CISCOIETFISISMIB::Ciimanareaaddrtable::Ciimanareaaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciimanareaaddrtable::Ciimanareaaddrentry> > ciimanareaaddrentry;
        
}; // CISCOIETFISISMIB::Ciimanareaaddrtable


class CISCOIETFISISMIB::Ciimanareaaddrtable::Ciimanareaaddrentry : public ydk::Entity
{
    public:
        Ciimanareaaddrentry();
        ~Ciimanareaaddrentry();

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

        ydk::YLeaf ciimanareaaddr; //type: binary
        ydk::YLeaf ciimanareaaddrexiststate; //type: RowStatus

}; // CISCOIETFISISMIB::Ciimanareaaddrtable::Ciimanareaaddrentry


class CISCOIETFISISMIB::Ciipacketcountertable : public ydk::Entity
{
    public:
        Ciipacketcountertable();
        ~Ciipacketcountertable();

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

        class Ciipacketcounterentry; //type: CISCOIETFISISMIB::Ciipacketcountertable::Ciipacketcounterentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciipacketcountertable::Ciipacketcounterentry> > ciipacketcounterentry;
        
}; // CISCOIETFISISMIB::Ciipacketcountertable


class CISCOIETFISISMIB::Ciipacketcountertable::Ciipacketcounterentry : public ydk::Entity
{
    public:
        Ciipacketcounterentry();
        ~Ciipacketcounterentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciipacketcountlevel; //type: Ciipacketcountlevel
        ydk::YLeaf ciipacketcountdirection; //type: Ciipacketcountdirection
        ydk::YLeaf ciipacketcountiihellos; //type: uint32
        ydk::YLeaf ciipacketcountishellos; //type: uint32
        ydk::YLeaf ciipacketcounteshellos; //type: uint32
        ydk::YLeaf ciipacketcountlsps; //type: uint32
        ydk::YLeaf ciipacketcountcsnps; //type: uint32
        ydk::YLeaf ciipacketcountpsnps; //type: uint32
        ydk::YLeaf ciipacketcountunknowns; //type: uint32
        class Ciipacketcountlevel;
        class Ciipacketcountdirection;

}; // CISCOIETFISISMIB::Ciipacketcountertable::Ciipacketcounterentry


class CISCOIETFISISMIB::Ciiratable : public ydk::Entity
{
    public:
        Ciiratable();
        ~Ciiratable();

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

        class Ciiraentry; //type: CISCOIETFISISMIB::Ciiratable::Ciiraentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiratable::Ciiraentry> > ciiraentry;
        
}; // CISCOIETFISISMIB::Ciiratable


class CISCOIETFISISMIB::Ciiratable::Ciiraentry : public ydk::Entity
{
    public:
        Ciiraentry();
        ~Ciiraentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciiraindex; //type: int32
        ydk::YLeaf ciiraexiststate; //type: RowStatus
        ydk::YLeaf ciiraadminstate; //type: CiiAdminState
        ydk::YLeaf ciiraaddrprefix; //type: binary
        ydk::YLeaf ciiramaptype; //type: Ciiramaptype
        ydk::YLeaf ciirametric; //type: int32
        ydk::YLeaf ciirametrictype; //type: CiiMetricType
        ydk::YLeaf ciirasnpaaddress; //type: binary
        ydk::YLeaf ciirasnpamask; //type: binary
        ydk::YLeaf ciirasnpaprefix; //type: binary
        ydk::YLeaf ciiratype; //type: Ciiratype
        class Ciiramaptype;
        class Ciiratype;

}; // CISCOIETFISISMIB::Ciiratable::Ciiraentry


class CISCOIETFISISMIB::Ciiredistributeaddrtable : public ydk::Entity
{
    public:
        Ciiredistributeaddrtable();
        ~Ciiredistributeaddrtable();

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

        class Ciiredistributeaddrentry; //type: CISCOIETFISISMIB::Ciiredistributeaddrtable::Ciiredistributeaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiredistributeaddrtable::Ciiredistributeaddrentry> > ciiredistributeaddrentry;
        
}; // CISCOIETFISISMIB::Ciiredistributeaddrtable


class CISCOIETFISISMIB::Ciiredistributeaddrtable::Ciiredistributeaddrentry : public ydk::Entity
{
    public:
        Ciiredistributeaddrentry();
        ~Ciiredistributeaddrentry();

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

        ydk::YLeaf ciiredistributeaddrtype; //type: InetAddressType
        ydk::YLeaf ciiredistributeaddraddress; //type: binary
        ydk::YLeaf ciiredistributeaddrprefixlen; //type: uint32
        ydk::YLeaf ciiredistributeaddrexiststate; //type: RowStatus

}; // CISCOIETFISISMIB::Ciiredistributeaddrtable::Ciiredistributeaddrentry


class CISCOIETFISISMIB::Ciiroutertable : public ydk::Entity
{
    public:
        Ciiroutertable();
        ~Ciiroutertable();

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

        class Ciirouterentry; //type: CISCOIETFISISMIB::Ciiroutertable::Ciirouterentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciiroutertable::Ciirouterentry> > ciirouterentry;
        
}; // CISCOIETFISISMIB::Ciiroutertable


class CISCOIETFISISMIB::Ciiroutertable::Ciirouterentry : public ydk::Entity
{
    public:
        Ciirouterentry();
        ~Ciirouterentry();

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

        ydk::YLeaf ciiroutersysid; //type: binary
        ydk::YLeaf ciirouterlevel; //type: CiiISLevel
        ydk::YLeaf ciirouterhostname; //type: string
        ydk::YLeaf ciirouterid; //type: uint32

}; // CISCOIETFISISMIB::Ciiroutertable::Ciirouterentry


class CISCOIETFISISMIB::Ciisummaddrtable : public ydk::Entity
{
    public:
        Ciisummaddrtable();
        ~Ciisummaddrtable();

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

        class Ciisummaddrentry; //type: CISCOIETFISISMIB::Ciisummaddrtable::Ciisummaddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciisummaddrtable::Ciisummaddrentry> > ciisummaddrentry;
        
}; // CISCOIETFISISMIB::Ciisummaddrtable


class CISCOIETFISISMIB::Ciisummaddrtable::Ciisummaddrentry : public ydk::Entity
{
    public:
        Ciisummaddrentry();
        ~Ciisummaddrentry();

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

        ydk::YLeaf ciisummaddresstype; //type: InetAddressType
        ydk::YLeaf ciisummaddress; //type: binary
        ydk::YLeaf ciisummaddrprefixlen; //type: uint32
        ydk::YLeaf ciisummaddrexiststate; //type: RowStatus
        ydk::YLeaf ciisummaddrmetric; //type: int32
        ydk::YLeaf ciisummaddrfullmetric; //type: uint32

}; // CISCOIETFISISMIB::Ciisummaddrtable::Ciisummaddrentry


class CISCOIETFISISMIB::Ciisysleveltable : public ydk::Entity
{
    public:
        Ciisysleveltable();
        ~Ciisysleveltable();

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

        class Ciisyslevelentry; //type: CISCOIETFISISMIB::Ciisysleveltable::Ciisyslevelentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciisysleveltable::Ciisyslevelentry> > ciisyslevelentry;
        
}; // CISCOIETFISISMIB::Ciisysleveltable


class CISCOIETFISISMIB::Ciisysleveltable::Ciisyslevelentry : public ydk::Entity
{
    public:
        Ciisyslevelentry();
        ~Ciisyslevelentry();

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

        ydk::YLeaf ciisyslevelindex; //type: Ciisyslevelindex
        ydk::YLeaf ciisysleveloriglspbuffsize; //type: int32
        ydk::YLeaf ciisyslevelminlspgenint; //type: uint32
        ydk::YLeaf ciisysleveloverloadstate; //type: CiiLevelState
        ydk::YLeaf ciisyslevelsetoverload; //type: boolean
        ydk::YLeaf ciisyslevelsetoverloaduntil; //type: uint32
        ydk::YLeaf ciisyslevelmetricstyle; //type: CiiMetricStyle
        ydk::YLeaf ciisyslevelspfconsiders; //type: CiiMetricStyle
        ydk::YLeaf ciisyslevelteenabled; //type: boolean
        class Ciisyslevelindex;

}; // CISCOIETFISISMIB::Ciisysleveltable::Ciisyslevelentry


class CISCOIETFISISMIB::Ciisysobject : public ydk::Entity
{
    public:
        Ciisysobject();
        ~Ciisysobject();

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

        ydk::YLeaf ciisysversion; //type: Ciisysversion
        ydk::YLeaf ciisystype; //type: Ciisystype
        ydk::YLeaf ciisysid; //type: binary
        ydk::YLeaf ciisysmaxpathsplits; //type: int32
        ydk::YLeaf ciisysmaxlspgenint; //type: int32
        ydk::YLeaf ciisyspolleshellorate; //type: uint32
        ydk::YLeaf ciisyswaittime; //type: uint32
        ydk::YLeaf ciisysadminstate; //type: CiiAdminState
        ydk::YLeaf ciisysl2tol1leaking; //type: boolean
        ydk::YLeaf ciisysmaxage; //type: uint32
        ydk::YLeaf ciisysreceivelspbuffersize; //type: uint32
        class Ciisysversion;
        class Ciisystype;

}; // CISCOIETFISISMIB::Ciisysobject


class CISCOIETFISISMIB::Ciisysprotsupptable : public ydk::Entity
{
    public:
        Ciisysprotsupptable();
        ~Ciisysprotsupptable();

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

        class Ciisysprotsuppentry; //type: CISCOIETFISISMIB::Ciisysprotsupptable::Ciisysprotsuppentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciisysprotsupptable::Ciisysprotsuppentry> > ciisysprotsuppentry;
        
}; // CISCOIETFISISMIB::Ciisysprotsupptable


class CISCOIETFISISMIB::Ciisysprotsupptable::Ciisysprotsuppentry : public ydk::Entity
{
    public:
        Ciisysprotsuppentry();
        ~Ciisysprotsuppentry();

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

        ydk::YLeaf ciisysprotsuppprotocol; //type: CiiSupportedProtocol
        ydk::YLeaf ciisysprotsuppexiststate; //type: RowStatus

}; // CISCOIETFISISMIB::Ciisysprotsupptable::Ciisysprotsuppentry


class CISCOIETFISISMIB::Ciisystemcountertable : public ydk::Entity
{
    public:
        Ciisystemcountertable();
        ~Ciisystemcountertable();

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

        class Ciisystemcounterentry; //type: CISCOIETFISISMIB::Ciisystemcountertable::Ciisystemcounterentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::Ciisystemcountertable::Ciisystemcounterentry> > ciisystemcounterentry;
        
}; // CISCOIETFISISMIB::Ciisystemcountertable


class CISCOIETFISISMIB::Ciisystemcountertable::Ciisystemcounterentry : public ydk::Entity
{
    public:
        Ciisystemcounterentry();
        ~Ciisystemcounterentry();

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

        ydk::YLeaf ciisysstatlevel; //type: Ciisysstatlevel
        ydk::YLeaf ciisysstatcorrlsps; //type: uint32
        ydk::YLeaf ciisysstatauthtypefails; //type: uint32
        ydk::YLeaf ciisysstatauthfails; //type: uint32
        ydk::YLeaf ciisysstatlspdbaseoloads; //type: uint32
        ydk::YLeaf ciisysstatmanaddrdropfromareas; //type: uint32
        ydk::YLeaf ciisysstatattmpttoexmaxseqnums; //type: uint32
        ydk::YLeaf ciisysstatseqnumskips; //type: uint32
        ydk::YLeaf ciisysstatownlsppurges; //type: uint32
        ydk::YLeaf ciisysstatidfieldlenmismatches; //type: uint32
        ydk::YLeaf ciisysstatpartchanges; //type: uint32
        ydk::YLeaf ciisysstatspfruns; //type: uint32
        ydk::YLeaf ciisysstatlsperrors; //type: uint32
        class Ciisysstatlevel;

}; // CISCOIETFISISMIB::Ciisystemcountertable::Ciisystemcounterentry

class CiiMetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

};

class CiiSupportedProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf iso8473;
        static const ydk::Enum::YLeaf ipV6;
        static const ydk::Enum::YLeaf ip;

};

class CiiLevelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf waiting;
        static const ydk::Enum::YLeaf overloaded;

};

class CiiISLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf area;
        static const ydk::Enum::YLeaf domain;

};

class CiiAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

};

class CiiMetricStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf narrow;
        static const ydk::Enum::YLeaf wide;
        static const ydk::Enum::YLeaf both;

};

class CISCOIETFISISMIB::Ciicircleveltable::Ciicirclevelentry::Ciicirclevelindex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;

};

class CISCOIETFISISMIB::Ciicirctable::Ciicircentry::Ciicirctype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf ptToPt;
        static const ydk::Enum::YLeaf staticIn;
        static const ydk::Enum::YLeaf staticOut;
        static const ydk::Enum::YLeaf dA;

};

class CISCOIETFISISMIB::Ciicirctable::Ciicircentry::Ciicirclevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1L2;

};

class CISCOIETFISISMIB::Ciicirctable::Ciicircentry::Ciicircmeshgroupenabled : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf blocked;
        static const ydk::Enum::YLeaf set;

};

class CISCOIETFISISMIB::Ciicircuitcountertable::Ciicircuitcounterentry::Ciicircuittype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lanlevel1;
        static const ydk::Enum::YLeaf lanlevel2;
        static const ydk::Enum::YLeaf p2pcircuit;

};

class CISCOIETFISISMIB::Ciiipratable::Ciiipraentry::Ciiipratype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf automatic;

};

class CISCOIETFISISMIB::Ciiipratable::Ciiipraentry::Ciiiprasourcetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf ospfv2;
        static const ydk::Enum::YLeaf ospfv3;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf igrp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf other;

};

class CISCOIETFISISMIB::Ciiisadjtable::Ciiisadjentry::Ciiisadjstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf failed;

};

class CISCOIETFISISMIB::Ciiisadjtable::Ciiisadjentry::Ciiisadj3Waystate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf failed;

};

class CISCOIETFISISMIB::Ciiisadjtable::Ciiisadjentry::Ciiisadjneighsystype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l1IntermediateSystem;
        static const ydk::Enum::YLeaf l2IntermediateSystem;
        static const ydk::Enum::YLeaf l1L2IntermediateSystem;
        static const ydk::Enum::YLeaf unknown;

};

class CISCOIETFISISMIB::Ciiisadjtable::Ciiisadjentry::Ciiisadjusage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1and2;

};

class CISCOIETFISISMIB::Ciipacketcountertable::Ciipacketcounterentry::Ciipacketcountlevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;

};

class CISCOIETFISISMIB::Ciipacketcountertable::Ciipacketcounterentry::Ciipacketcountdirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sending;
        static const ydk::Enum::YLeaf receiving;

};

class CISCOIETFISISMIB::Ciiratable::Ciiraentry::Ciiramaptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf explicit_;
        static const ydk::Enum::YLeaf extractIDI;
        static const ydk::Enum::YLeaf extractDSP;

};

class CISCOIETFISISMIB::Ciiratable::Ciiraentry::Ciiratype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf automatic;

};

class CISCOIETFISISMIB::Ciisysleveltable::Ciisyslevelentry::Ciisyslevelindex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;

};

class CISCOIETFISISMIB::Ciisysobject::Ciisysversion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf one;

};

class CISCOIETFISISMIB::Ciisysobject::Ciisystype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;
        static const ydk::Enum::YLeaf level1L2IS;

};

class CISCOIETFISISMIB::Ciisystemcountertable::Ciisystemcounterentry::Ciisysstatlevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;

};


}
}

#endif /* _CISCO_IETF_ISIS_MIB_ */

