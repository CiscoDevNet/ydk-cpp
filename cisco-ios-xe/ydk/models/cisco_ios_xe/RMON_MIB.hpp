#ifndef _RMON_MIB_
#define _RMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace RMON_MIB {

class Rmoneventsv2 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Rmoneventsv2();
        ~Rmoneventsv2();


}; // Rmoneventsv2

class RmonMib : public ydk::Entity
{
    public:
        RmonMib();
        ~RmonMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Etherstatstable; //type: RmonMib::Etherstatstable
        class Historycontroltable; //type: RmonMib::Historycontroltable
        class Etherhistorytable; //type: RmonMib::Etherhistorytable
        class Alarmtable; //type: RmonMib::Alarmtable
        class Hostcontroltable; //type: RmonMib::Hostcontroltable
        class Hosttable; //type: RmonMib::Hosttable
        class Hosttimetable; //type: RmonMib::Hosttimetable
        class Hosttopncontroltable; //type: RmonMib::Hosttopncontroltable
        class Hosttopntable; //type: RmonMib::Hosttopntable
        class Matrixcontroltable; //type: RmonMib::Matrixcontroltable
        class Matrixsdtable; //type: RmonMib::Matrixsdtable
        class Matrixdstable; //type: RmonMib::Matrixdstable
        class Filtertable; //type: RmonMib::Filtertable
        class Channeltable; //type: RmonMib::Channeltable
        class Buffercontroltable; //type: RmonMib::Buffercontroltable
        class Capturebuffertable; //type: RmonMib::Capturebuffertable
        class Eventtable; //type: RmonMib::Eventtable
        class Logtable; //type: RmonMib::Logtable

        std::shared_ptr<RMON_MIB::RmonMib::Alarmtable> alarmtable;
        std::shared_ptr<RMON_MIB::RmonMib::Buffercontroltable> buffercontroltable;
        std::shared_ptr<RMON_MIB::RmonMib::Capturebuffertable> capturebuffertable;
        std::shared_ptr<RMON_MIB::RmonMib::Channeltable> channeltable;
        std::shared_ptr<RMON_MIB::RmonMib::Etherhistorytable> etherhistorytable;
        std::shared_ptr<RMON_MIB::RmonMib::Etherstatstable> etherstatstable;
        std::shared_ptr<RMON_MIB::RmonMib::Eventtable> eventtable;
        std::shared_ptr<RMON_MIB::RmonMib::Filtertable> filtertable;
        std::shared_ptr<RMON_MIB::RmonMib::Historycontroltable> historycontroltable;
        std::shared_ptr<RMON_MIB::RmonMib::Hostcontroltable> hostcontroltable;
        std::shared_ptr<RMON_MIB::RmonMib::Hosttable> hosttable;
        std::shared_ptr<RMON_MIB::RmonMib::Hosttimetable> hosttimetable;
        std::shared_ptr<RMON_MIB::RmonMib::Hosttopncontroltable> hosttopncontroltable;
        std::shared_ptr<RMON_MIB::RmonMib::Hosttopntable> hosttopntable;
        std::shared_ptr<RMON_MIB::RmonMib::Logtable> logtable;
        std::shared_ptr<RMON_MIB::RmonMib::Matrixcontroltable> matrixcontroltable;
        std::shared_ptr<RMON_MIB::RmonMib::Matrixdstable> matrixdstable;
        std::shared_ptr<RMON_MIB::RmonMib::Matrixsdtable> matrixsdtable;
        
}; // RmonMib


class RmonMib::Etherstatstable : public ydk::Entity
{
    public:
        Etherstatstable();
        ~Etherstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Etherstatsentry; //type: RmonMib::Etherstatstable::Etherstatsentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Etherstatstable::Etherstatsentry> > etherstatsentry;
        
}; // RmonMib::Etherstatstable


class RmonMib::Etherstatstable::Etherstatsentry : public ydk::Entity
{
    public:
        Etherstatsentry();
        ~Etherstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etherstatsindex; //type: int32
        ydk::YLeaf etherstatsdatasource; //type: string
        ydk::YLeaf etherstatsdropevents; //type: uint32
        ydk::YLeaf etherstatsoctets; //type: uint32
        ydk::YLeaf etherstatspkts; //type: uint32
        ydk::YLeaf etherstatsbroadcastpkts; //type: uint32
        ydk::YLeaf etherstatsmulticastpkts; //type: uint32
        ydk::YLeaf etherstatscrcalignerrors; //type: uint32
        ydk::YLeaf etherstatsundersizepkts; //type: uint32
        ydk::YLeaf etherstatsoversizepkts; //type: uint32
        ydk::YLeaf etherstatsfragments; //type: uint32
        ydk::YLeaf etherstatsjabbers; //type: uint32
        ydk::YLeaf etherstatscollisions; //type: uint32
        ydk::YLeaf etherstatspkts64octets; //type: uint32
        ydk::YLeaf etherstatspkts65to127octets; //type: uint32
        ydk::YLeaf etherstatspkts128to255octets; //type: uint32
        ydk::YLeaf etherstatspkts256to511octets; //type: uint32
        ydk::YLeaf etherstatspkts512to1023octets; //type: uint32
        ydk::YLeaf etherstatspkts1024to1518octets; //type: uint32
        ydk::YLeaf etherstatsowner; //type: binary
        ydk::YLeaf etherstatsstatus; //type: Entrystatus
        ydk::YLeaf etherstatsdroppedframes; //type: uint32
        ydk::YLeaf etherstatscreatetime; //type: uint32

}; // RmonMib::Etherstatstable::Etherstatsentry


class RmonMib::Historycontroltable : public ydk::Entity
{
    public:
        Historycontroltable();
        ~Historycontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Historycontrolentry; //type: RmonMib::Historycontroltable::Historycontrolentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Historycontroltable::Historycontrolentry> > historycontrolentry;
        
}; // RmonMib::Historycontroltable


class RmonMib::Historycontroltable::Historycontrolentry : public ydk::Entity
{
    public:
        Historycontrolentry();
        ~Historycontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf historycontrolindex; //type: int32
        ydk::YLeaf historycontroldatasource; //type: string
        ydk::YLeaf historycontrolbucketsrequested; //type: int32
        ydk::YLeaf historycontrolbucketsgranted; //type: int32
        ydk::YLeaf historycontrolinterval; //type: int32
        ydk::YLeaf historycontrolowner; //type: binary
        ydk::YLeaf historycontrolstatus; //type: Entrystatus
        ydk::YLeaf historycontroldroppedframes; //type: uint32

}; // RmonMib::Historycontroltable::Historycontrolentry


class RmonMib::Etherhistorytable : public ydk::Entity
{
    public:
        Etherhistorytable();
        ~Etherhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Etherhistoryentry; //type: RmonMib::Etherhistorytable::Etherhistoryentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Etherhistorytable::Etherhistoryentry> > etherhistoryentry;
        
}; // RmonMib::Etherhistorytable


class RmonMib::Etherhistorytable::Etherhistoryentry : public ydk::Entity
{
    public:
        Etherhistoryentry();
        ~Etherhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etherhistoryindex; //type: int32
        ydk::YLeaf etherhistorysampleindex; //type: int32
        ydk::YLeaf etherhistoryintervalstart; //type: uint32
        ydk::YLeaf etherhistorydropevents; //type: uint32
        ydk::YLeaf etherhistoryoctets; //type: uint32
        ydk::YLeaf etherhistorypkts; //type: uint32
        ydk::YLeaf etherhistorybroadcastpkts; //type: uint32
        ydk::YLeaf etherhistorymulticastpkts; //type: uint32
        ydk::YLeaf etherhistorycrcalignerrors; //type: uint32
        ydk::YLeaf etherhistoryundersizepkts; //type: uint32
        ydk::YLeaf etherhistoryoversizepkts; //type: uint32
        ydk::YLeaf etherhistoryfragments; //type: uint32
        ydk::YLeaf etherhistoryjabbers; //type: uint32
        ydk::YLeaf etherhistorycollisions; //type: uint32
        ydk::YLeaf etherhistoryutilization; //type: int32

}; // RmonMib::Etherhistorytable::Etherhistoryentry


class RmonMib::Alarmtable : public ydk::Entity
{
    public:
        Alarmtable();
        ~Alarmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Alarmentry; //type: RmonMib::Alarmtable::Alarmentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Alarmtable::Alarmentry> > alarmentry;
        
}; // RmonMib::Alarmtable


class RmonMib::Alarmtable::Alarmentry : public ydk::Entity
{
    public:
        Alarmentry();
        ~Alarmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alarmindex; //type: int32
        ydk::YLeaf alarminterval; //type: int32
        ydk::YLeaf alarmvariable; //type: string
        ydk::YLeaf alarmsampletype; //type: Alarmsampletype
        ydk::YLeaf alarmvalue; //type: int32
        ydk::YLeaf alarmstartupalarm; //type: Alarmstartupalarm
        ydk::YLeaf alarmrisingthreshold; //type: int32
        ydk::YLeaf alarmfallingthreshold; //type: int32
        ydk::YLeaf alarmrisingeventindex; //type: int32
        ydk::YLeaf alarmfallingeventindex; //type: int32
        ydk::YLeaf alarmowner; //type: binary
        ydk::YLeaf alarmstatus; //type: Entrystatus
        class Alarmsampletype;
        class Alarmstartupalarm;

}; // RmonMib::Alarmtable::Alarmentry


class RmonMib::Hostcontroltable : public ydk::Entity
{
    public:
        Hostcontroltable();
        ~Hostcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hostcontrolentry; //type: RmonMib::Hostcontroltable::Hostcontrolentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Hostcontroltable::Hostcontrolentry> > hostcontrolentry;
        
}; // RmonMib::Hostcontroltable


class RmonMib::Hostcontroltable::Hostcontrolentry : public ydk::Entity
{
    public:
        Hostcontrolentry();
        ~Hostcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostcontrolindex; //type: int32
        ydk::YLeaf hostcontroldatasource; //type: string
        ydk::YLeaf hostcontroltablesize; //type: int32
        ydk::YLeaf hostcontrollastdeletetime; //type: uint32
        ydk::YLeaf hostcontrolowner; //type: binary
        ydk::YLeaf hostcontrolstatus; //type: Entrystatus
        ydk::YLeaf hostcontroldroppedframes; //type: uint32
        ydk::YLeaf hostcontrolcreatetime; //type: uint32

}; // RmonMib::Hostcontroltable::Hostcontrolentry


class RmonMib::Hosttable : public ydk::Entity
{
    public:
        Hosttable();
        ~Hosttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hostentry; //type: RmonMib::Hosttable::Hostentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Hosttable::Hostentry> > hostentry;
        
}; // RmonMib::Hosttable


class RmonMib::Hosttable::Hostentry : public ydk::Entity
{
    public:
        Hostentry();
        ~Hostentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostindex; //type: int32
        ydk::YLeaf hostaddress; //type: binary
        ydk::YLeaf hostcreationorder; //type: int32
        ydk::YLeaf hostinpkts; //type: uint32
        ydk::YLeaf hostoutpkts; //type: uint32
        ydk::YLeaf hostinoctets; //type: uint32
        ydk::YLeaf hostoutoctets; //type: uint32
        ydk::YLeaf hostouterrors; //type: uint32
        ydk::YLeaf hostoutbroadcastpkts; //type: uint32
        ydk::YLeaf hostoutmulticastpkts; //type: uint32

}; // RmonMib::Hosttable::Hostentry


class RmonMib::Hosttimetable : public ydk::Entity
{
    public:
        Hosttimetable();
        ~Hosttimetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hosttimeentry; //type: RmonMib::Hosttimetable::Hosttimeentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Hosttimetable::Hosttimeentry> > hosttimeentry;
        
}; // RmonMib::Hosttimetable


class RmonMib::Hosttimetable::Hosttimeentry : public ydk::Entity
{
    public:
        Hosttimeentry();
        ~Hosttimeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hosttimeindex; //type: int32
        ydk::YLeaf hosttimecreationorder; //type: int32
        ydk::YLeaf hosttimeaddress; //type: binary
        ydk::YLeaf hosttimeinpkts; //type: uint32
        ydk::YLeaf hosttimeoutpkts; //type: uint32
        ydk::YLeaf hosttimeinoctets; //type: uint32
        ydk::YLeaf hosttimeoutoctets; //type: uint32
        ydk::YLeaf hosttimeouterrors; //type: uint32
        ydk::YLeaf hosttimeoutbroadcastpkts; //type: uint32
        ydk::YLeaf hosttimeoutmulticastpkts; //type: uint32

}; // RmonMib::Hosttimetable::Hosttimeentry


class RmonMib::Hosttopncontroltable : public ydk::Entity
{
    public:
        Hosttopncontroltable();
        ~Hosttopncontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hosttopncontrolentry; //type: RmonMib::Hosttopncontroltable::Hosttopncontrolentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Hosttopncontroltable::Hosttopncontrolentry> > hosttopncontrolentry;
        
}; // RmonMib::Hosttopncontroltable


class RmonMib::Hosttopncontroltable::Hosttopncontrolentry : public ydk::Entity
{
    public:
        Hosttopncontrolentry();
        ~Hosttopncontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hosttopncontrolindex; //type: int32
        ydk::YLeaf hosttopnhostindex; //type: int32
        ydk::YLeaf hosttopnratebase; //type: Hosttopnratebase
        ydk::YLeaf hosttopntimeremaining; //type: int32
        ydk::YLeaf hosttopnduration; //type: int32
        ydk::YLeaf hosttopnrequestedsize; //type: int32
        ydk::YLeaf hosttopngrantedsize; //type: int32
        ydk::YLeaf hosttopnstarttime; //type: uint32
        ydk::YLeaf hosttopnowner; //type: binary
        ydk::YLeaf hosttopnstatus; //type: Entrystatus
        class Hosttopnratebase;

}; // RmonMib::Hosttopncontroltable::Hosttopncontrolentry


class RmonMib::Hosttopntable : public ydk::Entity
{
    public:
        Hosttopntable();
        ~Hosttopntable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hosttopnentry; //type: RmonMib::Hosttopntable::Hosttopnentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Hosttopntable::Hosttopnentry> > hosttopnentry;
        
}; // RmonMib::Hosttopntable


class RmonMib::Hosttopntable::Hosttopnentry : public ydk::Entity
{
    public:
        Hosttopnentry();
        ~Hosttopnentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hosttopnreport; //type: int32
        ydk::YLeaf hosttopnindex; //type: int32
        ydk::YLeaf hosttopnaddress; //type: binary
        ydk::YLeaf hosttopnrate; //type: int32

}; // RmonMib::Hosttopntable::Hosttopnentry


class RmonMib::Matrixcontroltable : public ydk::Entity
{
    public:
        Matrixcontroltable();
        ~Matrixcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Matrixcontrolentry; //type: RmonMib::Matrixcontroltable::Matrixcontrolentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Matrixcontroltable::Matrixcontrolentry> > matrixcontrolentry;
        
}; // RmonMib::Matrixcontroltable


class RmonMib::Matrixcontroltable::Matrixcontrolentry : public ydk::Entity
{
    public:
        Matrixcontrolentry();
        ~Matrixcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf matrixcontrolindex; //type: int32
        ydk::YLeaf matrixcontroldatasource; //type: string
        ydk::YLeaf matrixcontroltablesize; //type: int32
        ydk::YLeaf matrixcontrollastdeletetime; //type: uint32
        ydk::YLeaf matrixcontrolowner; //type: binary
        ydk::YLeaf matrixcontrolstatus; //type: Entrystatus
        ydk::YLeaf matrixcontroldroppedframes; //type: uint32
        ydk::YLeaf matrixcontrolcreatetime; //type: uint32

}; // RmonMib::Matrixcontroltable::Matrixcontrolentry


class RmonMib::Matrixsdtable : public ydk::Entity
{
    public:
        Matrixsdtable();
        ~Matrixsdtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Matrixsdentry; //type: RmonMib::Matrixsdtable::Matrixsdentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Matrixsdtable::Matrixsdentry> > matrixsdentry;
        
}; // RmonMib::Matrixsdtable


class RmonMib::Matrixsdtable::Matrixsdentry : public ydk::Entity
{
    public:
        Matrixsdentry();
        ~Matrixsdentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf matrixsdindex; //type: int32
        ydk::YLeaf matrixsdsourceaddress; //type: binary
        ydk::YLeaf matrixsddestaddress; //type: binary
        ydk::YLeaf matrixsdpkts; //type: uint32
        ydk::YLeaf matrixsdoctets; //type: uint32
        ydk::YLeaf matrixsderrors; //type: uint32

}; // RmonMib::Matrixsdtable::Matrixsdentry


class RmonMib::Matrixdstable : public ydk::Entity
{
    public:
        Matrixdstable();
        ~Matrixdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Matrixdsentry; //type: RmonMib::Matrixdstable::Matrixdsentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Matrixdstable::Matrixdsentry> > matrixdsentry;
        
}; // RmonMib::Matrixdstable


class RmonMib::Matrixdstable::Matrixdsentry : public ydk::Entity
{
    public:
        Matrixdsentry();
        ~Matrixdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf matrixdsindex; //type: int32
        ydk::YLeaf matrixdsdestaddress; //type: binary
        ydk::YLeaf matrixdssourceaddress; //type: binary
        ydk::YLeaf matrixdspkts; //type: uint32
        ydk::YLeaf matrixdsoctets; //type: uint32
        ydk::YLeaf matrixdserrors; //type: uint32

}; // RmonMib::Matrixdstable::Matrixdsentry


class RmonMib::Filtertable : public ydk::Entity
{
    public:
        Filtertable();
        ~Filtertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Filterentry; //type: RmonMib::Filtertable::Filterentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Filtertable::Filterentry> > filterentry;
        
}; // RmonMib::Filtertable


class RmonMib::Filtertable::Filterentry : public ydk::Entity
{
    public:
        Filterentry();
        ~Filterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filterindex; //type: int32
        ydk::YLeaf filterchannelindex; //type: int32
        ydk::YLeaf filterpktdataoffset; //type: int32
        ydk::YLeaf filterpktdata; //type: binary
        ydk::YLeaf filterpktdatamask; //type: binary
        ydk::YLeaf filterpktdatanotmask; //type: binary
        ydk::YLeaf filterpktstatus; //type: int32
        ydk::YLeaf filterpktstatusmask; //type: int32
        ydk::YLeaf filterpktstatusnotmask; //type: int32
        ydk::YLeaf filterowner; //type: binary
        ydk::YLeaf filterstatus; //type: Entrystatus
        ydk::YLeaf filterprotocoldirdatalocalindex; //type: int32
        ydk::YLeaf filterprotocoldirlocalindex; //type: int32

}; // RmonMib::Filtertable::Filterentry


class RmonMib::Channeltable : public ydk::Entity
{
    public:
        Channeltable();
        ~Channeltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Channelentry; //type: RmonMib::Channeltable::Channelentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Channeltable::Channelentry> > channelentry;
        
}; // RmonMib::Channeltable


class RmonMib::Channeltable::Channelentry : public ydk::Entity
{
    public:
        Channelentry();
        ~Channelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf channelindex; //type: int32
        ydk::YLeaf channelifindex; //type: int32
        ydk::YLeaf channelaccepttype; //type: Channelaccepttype
        ydk::YLeaf channeldatacontrol; //type: Channeldatacontrol
        ydk::YLeaf channelturnoneventindex; //type: int32
        ydk::YLeaf channelturnoffeventindex; //type: int32
        ydk::YLeaf channeleventindex; //type: int32
        ydk::YLeaf channeleventstatus; //type: Channeleventstatus
        ydk::YLeaf channelmatches; //type: uint32
        ydk::YLeaf channeldescription; //type: string
        ydk::YLeaf channelowner; //type: binary
        ydk::YLeaf channelstatus; //type: Entrystatus
        ydk::YLeaf channeldroppedframes; //type: uint32
        ydk::YLeaf channelcreatetime; //type: uint32
        class Channelaccepttype;
        class Channeldatacontrol;
        class Channeleventstatus;

}; // RmonMib::Channeltable::Channelentry


class RmonMib::Buffercontroltable : public ydk::Entity
{
    public:
        Buffercontroltable();
        ~Buffercontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Buffercontrolentry; //type: RmonMib::Buffercontroltable::Buffercontrolentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Buffercontroltable::Buffercontrolentry> > buffercontrolentry;
        
}; // RmonMib::Buffercontroltable


class RmonMib::Buffercontroltable::Buffercontrolentry : public ydk::Entity
{
    public:
        Buffercontrolentry();
        ~Buffercontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buffercontrolindex; //type: int32
        ydk::YLeaf buffercontrolchannelindex; //type: int32
        ydk::YLeaf buffercontrolfullstatus; //type: Buffercontrolfullstatus
        ydk::YLeaf buffercontrolfullaction; //type: Buffercontrolfullaction
        ydk::YLeaf buffercontrolcaptureslicesize; //type: int32
        ydk::YLeaf buffercontroldownloadslicesize; //type: int32
        ydk::YLeaf buffercontroldownloadoffset; //type: int32
        ydk::YLeaf buffercontrolmaxoctetsrequested; //type: int32
        ydk::YLeaf buffercontrolmaxoctetsgranted; //type: int32
        ydk::YLeaf buffercontrolcapturedpackets; //type: int32
        ydk::YLeaf buffercontrolturnontime; //type: uint32
        ydk::YLeaf buffercontrolowner; //type: binary
        ydk::YLeaf buffercontrolstatus; //type: Entrystatus
        class Buffercontrolfullstatus;
        class Buffercontrolfullaction;

}; // RmonMib::Buffercontroltable::Buffercontrolentry


class RmonMib::Capturebuffertable : public ydk::Entity
{
    public:
        Capturebuffertable();
        ~Capturebuffertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Capturebufferentry; //type: RmonMib::Capturebuffertable::Capturebufferentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Capturebuffertable::Capturebufferentry> > capturebufferentry;
        
}; // RmonMib::Capturebuffertable


class RmonMib::Capturebuffertable::Capturebufferentry : public ydk::Entity
{
    public:
        Capturebufferentry();
        ~Capturebufferentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capturebuffercontrolindex; //type: int32
        ydk::YLeaf capturebufferindex; //type: int32
        ydk::YLeaf capturebufferpacketid; //type: int32
        ydk::YLeaf capturebufferpacketdata; //type: binary
        ydk::YLeaf capturebufferpacketlength; //type: int32
        ydk::YLeaf capturebufferpackettime; //type: int32
        ydk::YLeaf capturebufferpacketstatus; //type: int32

}; // RmonMib::Capturebuffertable::Capturebufferentry


class RmonMib::Eventtable : public ydk::Entity
{
    public:
        Eventtable();
        ~Eventtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Evententry; //type: RmonMib::Eventtable::Evententry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Eventtable::Evententry> > evententry;
        
}; // RmonMib::Eventtable


class RmonMib::Eventtable::Evententry : public ydk::Entity
{
    public:
        Evententry();
        ~Evententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eventindex; //type: int32
        ydk::YLeaf eventdescription; //type: string
        ydk::YLeaf eventtype; //type: Eventtype
        ydk::YLeaf eventcommunity; //type: binary
        ydk::YLeaf eventlasttimesent; //type: uint32
        ydk::YLeaf eventowner; //type: binary
        ydk::YLeaf eventstatus; //type: Entrystatus
        class Eventtype;

}; // RmonMib::Eventtable::Evententry


class RmonMib::Logtable : public ydk::Entity
{
    public:
        Logtable();
        ~Logtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Logentry; //type: RmonMib::Logtable::Logentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Logtable::Logentry> > logentry;
        
}; // RmonMib::Logtable


class RmonMib::Logtable::Logentry : public ydk::Entity
{
    public:
        Logentry();
        ~Logentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logeventindex; //type: int32
        ydk::YLeaf logindex; //type: int32
        ydk::YLeaf logtime; //type: uint32
        ydk::YLeaf logdescription; //type: string

}; // RmonMib::Logtable::Logentry

class Entrystatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf valid;
        static const ydk::Enum::YLeaf createRequest;
        static const ydk::Enum::YLeaf underCreation;
        static const ydk::Enum::YLeaf invalid;

};

class RmonMib::Alarmtable::Alarmentry::Alarmsampletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

};

class RmonMib::Alarmtable::Alarmentry::Alarmstartupalarm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf risingAlarm;
        static const ydk::Enum::YLeaf fallingAlarm;
        static const ydk::Enum::YLeaf risingOrFallingAlarm;

};

class RmonMib::Hosttopncontroltable::Hosttopncontrolentry::Hosttopnratebase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hostTopNInPkts;
        static const ydk::Enum::YLeaf hostTopNOutPkts;
        static const ydk::Enum::YLeaf hostTopNInOctets;
        static const ydk::Enum::YLeaf hostTopNOutOctets;
        static const ydk::Enum::YLeaf hostTopNOutErrors;
        static const ydk::Enum::YLeaf hostTopNOutBroadcastPkts;
        static const ydk::Enum::YLeaf hostTopNOutMulticastPkts;

};

class RmonMib::Channeltable::Channelentry::Channelaccepttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acceptMatched;
        static const ydk::Enum::YLeaf acceptFailed;

};

class RmonMib::Channeltable::Channelentry::Channeldatacontrol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

};

class RmonMib::Channeltable::Channelentry::Channeleventstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eventReady;
        static const ydk::Enum::YLeaf eventFired;
        static const ydk::Enum::YLeaf eventAlwaysReady;

};

class RmonMib::Buffercontroltable::Buffercontrolentry::Buffercontrolfullstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf spaceAvailable;
        static const ydk::Enum::YLeaf full;

};

class RmonMib::Buffercontroltable::Buffercontrolentry::Buffercontrolfullaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lockWhenFull;
        static const ydk::Enum::YLeaf wrapWhenFull;

};

class RmonMib::Eventtable::Evententry::Eventtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf snmptrap;
        static const ydk::Enum::YLeaf logandtrap;

};


}
}

#endif /* _RMON_MIB_ */

