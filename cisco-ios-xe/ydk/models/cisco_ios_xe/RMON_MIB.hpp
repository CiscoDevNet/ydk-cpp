#ifndef _RMON_MIB_
#define _RMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace ydk {
namespace RMON_MIB {

class Rmoneventsv2Identity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        Rmoneventsv2Identity();
        ~Rmoneventsv2Identity();


}; // Rmoneventsv2Identity

class RmonMib : public Entity
{
    public:
        RmonMib();
        ~RmonMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

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


class RmonMib::Etherstatstable : public Entity
{
    public:
        Etherstatstable();
        ~Etherstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Etherstatsentry; //type: RmonMib::Etherstatstable::Etherstatsentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Etherstatstable::Etherstatsentry> > etherstatsentry;
        
}; // RmonMib::Etherstatstable


class RmonMib::Etherstatstable::Etherstatsentry : public Entity
{
    public:
        Etherstatsentry();
        ~Etherstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etherstatsindex; //type: int32
        YLeaf etherstatsdatasource; //type: string
        YLeaf etherstatsdropevents; //type: uint32
        YLeaf etherstatsoctets; //type: uint32
        YLeaf etherstatspkts; //type: uint32
        YLeaf etherstatsbroadcastpkts; //type: uint32
        YLeaf etherstatsmulticastpkts; //type: uint32
        YLeaf etherstatscrcalignerrors; //type: uint32
        YLeaf etherstatsundersizepkts; //type: uint32
        YLeaf etherstatsoversizepkts; //type: uint32
        YLeaf etherstatsfragments; //type: uint32
        YLeaf etherstatsjabbers; //type: uint32
        YLeaf etherstatscollisions; //type: uint32
        YLeaf etherstatspkts64octets; //type: uint32
        YLeaf etherstatspkts65to127octets; //type: uint32
        YLeaf etherstatspkts128to255octets; //type: uint32
        YLeaf etherstatspkts256to511octets; //type: uint32
        YLeaf etherstatspkts512to1023octets; //type: uint32
        YLeaf etherstatspkts1024to1518octets; //type: uint32
        YLeaf etherstatsowner; //type: binary
        YLeaf etherstatsstatus; //type: EntrystatusEnum

}; // RmonMib::Etherstatstable::Etherstatsentry


class RmonMib::Historycontroltable : public Entity
{
    public:
        Historycontroltable();
        ~Historycontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Historycontrolentry; //type: RmonMib::Historycontroltable::Historycontrolentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Historycontroltable::Historycontrolentry> > historycontrolentry;
        
}; // RmonMib::Historycontroltable


class RmonMib::Historycontroltable::Historycontrolentry : public Entity
{
    public:
        Historycontrolentry();
        ~Historycontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf historycontrolindex; //type: int32
        YLeaf historycontroldatasource; //type: string
        YLeaf historycontrolbucketsrequested; //type: int32
        YLeaf historycontrolbucketsgranted; //type: int32
        YLeaf historycontrolinterval; //type: int32
        YLeaf historycontrolowner; //type: binary
        YLeaf historycontrolstatus; //type: EntrystatusEnum

}; // RmonMib::Historycontroltable::Historycontrolentry


class RmonMib::Etherhistorytable : public Entity
{
    public:
        Etherhistorytable();
        ~Etherhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Etherhistoryentry; //type: RmonMib::Etherhistorytable::Etherhistoryentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Etherhistorytable::Etherhistoryentry> > etherhistoryentry;
        
}; // RmonMib::Etherhistorytable


class RmonMib::Etherhistorytable::Etherhistoryentry : public Entity
{
    public:
        Etherhistoryentry();
        ~Etherhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etherhistoryindex; //type: int32
        YLeaf etherhistorysampleindex; //type: int32
        YLeaf etherhistoryintervalstart; //type: uint32
        YLeaf etherhistorydropevents; //type: uint32
        YLeaf etherhistoryoctets; //type: uint32
        YLeaf etherhistorypkts; //type: uint32
        YLeaf etherhistorybroadcastpkts; //type: uint32
        YLeaf etherhistorymulticastpkts; //type: uint32
        YLeaf etherhistorycrcalignerrors; //type: uint32
        YLeaf etherhistoryundersizepkts; //type: uint32
        YLeaf etherhistoryoversizepkts; //type: uint32
        YLeaf etherhistoryfragments; //type: uint32
        YLeaf etherhistoryjabbers; //type: uint32
        YLeaf etherhistorycollisions; //type: uint32
        YLeaf etherhistoryutilization; //type: int32

}; // RmonMib::Etherhistorytable::Etherhistoryentry


class RmonMib::Alarmtable : public Entity
{
    public:
        Alarmtable();
        ~Alarmtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Alarmentry; //type: RmonMib::Alarmtable::Alarmentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Alarmtable::Alarmentry> > alarmentry;
        
}; // RmonMib::Alarmtable


class RmonMib::Alarmtable::Alarmentry : public Entity
{
    public:
        Alarmentry();
        ~Alarmentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alarmindex; //type: int32
        YLeaf alarminterval; //type: int32
        YLeaf alarmvariable; //type: string
        YLeaf alarmsampletype; //type: AlarmsampletypeEnum
        YLeaf alarmvalue; //type: int32
        YLeaf alarmstartupalarm; //type: AlarmstartupalarmEnum
        YLeaf alarmrisingthreshold; //type: int32
        YLeaf alarmfallingthreshold; //type: int32
        YLeaf alarmrisingeventindex; //type: int32
        YLeaf alarmfallingeventindex; //type: int32
        YLeaf alarmowner; //type: binary
        YLeaf alarmstatus; //type: EntrystatusEnum
        class AlarmsampletypeEnum;
        class AlarmstartupalarmEnum;

}; // RmonMib::Alarmtable::Alarmentry


class RmonMib::Hostcontroltable : public Entity
{
    public:
        Hostcontroltable();
        ~Hostcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hostcontrolentry; //type: RmonMib::Hostcontroltable::Hostcontrolentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Hostcontroltable::Hostcontrolentry> > hostcontrolentry;
        
}; // RmonMib::Hostcontroltable


class RmonMib::Hostcontroltable::Hostcontrolentry : public Entity
{
    public:
        Hostcontrolentry();
        ~Hostcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hostcontrolindex; //type: int32
        YLeaf hostcontroldatasource; //type: string
        YLeaf hostcontroltablesize; //type: int32
        YLeaf hostcontrollastdeletetime; //type: uint32
        YLeaf hostcontrolowner; //type: binary
        YLeaf hostcontrolstatus; //type: EntrystatusEnum

}; // RmonMib::Hostcontroltable::Hostcontrolentry


class RmonMib::Hosttable : public Entity
{
    public:
        Hosttable();
        ~Hosttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hostentry; //type: RmonMib::Hosttable::Hostentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Hosttable::Hostentry> > hostentry;
        
}; // RmonMib::Hosttable


class RmonMib::Hosttable::Hostentry : public Entity
{
    public:
        Hostentry();
        ~Hostentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hostindex; //type: int32
        YLeaf hostaddress; //type: binary
        YLeaf hostcreationorder; //type: int32
        YLeaf hostinpkts; //type: uint32
        YLeaf hostoutpkts; //type: uint32
        YLeaf hostinoctets; //type: uint32
        YLeaf hostoutoctets; //type: uint32
        YLeaf hostouterrors; //type: uint32
        YLeaf hostoutbroadcastpkts; //type: uint32
        YLeaf hostoutmulticastpkts; //type: uint32

}; // RmonMib::Hosttable::Hostentry


class RmonMib::Hosttimetable : public Entity
{
    public:
        Hosttimetable();
        ~Hosttimetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hosttimeentry; //type: RmonMib::Hosttimetable::Hosttimeentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Hosttimetable::Hosttimeentry> > hosttimeentry;
        
}; // RmonMib::Hosttimetable


class RmonMib::Hosttimetable::Hosttimeentry : public Entity
{
    public:
        Hosttimeentry();
        ~Hosttimeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hosttimeindex; //type: int32
        YLeaf hosttimecreationorder; //type: int32
        YLeaf hosttimeaddress; //type: binary
        YLeaf hosttimeinpkts; //type: uint32
        YLeaf hosttimeoutpkts; //type: uint32
        YLeaf hosttimeinoctets; //type: uint32
        YLeaf hosttimeoutoctets; //type: uint32
        YLeaf hosttimeouterrors; //type: uint32
        YLeaf hosttimeoutbroadcastpkts; //type: uint32
        YLeaf hosttimeoutmulticastpkts; //type: uint32

}; // RmonMib::Hosttimetable::Hosttimeentry


class RmonMib::Hosttopncontroltable : public Entity
{
    public:
        Hosttopncontroltable();
        ~Hosttopncontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hosttopncontrolentry; //type: RmonMib::Hosttopncontroltable::Hosttopncontrolentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Hosttopncontroltable::Hosttopncontrolentry> > hosttopncontrolentry;
        
}; // RmonMib::Hosttopncontroltable


class RmonMib::Hosttopncontroltable::Hosttopncontrolentry : public Entity
{
    public:
        Hosttopncontrolentry();
        ~Hosttopncontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hosttopncontrolindex; //type: int32
        YLeaf hosttopnhostindex; //type: int32
        YLeaf hosttopnratebase; //type: HosttopnratebaseEnum
        YLeaf hosttopntimeremaining; //type: int32
        YLeaf hosttopnduration; //type: int32
        YLeaf hosttopnrequestedsize; //type: int32
        YLeaf hosttopngrantedsize; //type: int32
        YLeaf hosttopnstarttime; //type: uint32
        YLeaf hosttopnowner; //type: binary
        YLeaf hosttopnstatus; //type: EntrystatusEnum
        class HosttopnratebaseEnum;

}; // RmonMib::Hosttopncontroltable::Hosttopncontrolentry


class RmonMib::Hosttopntable : public Entity
{
    public:
        Hosttopntable();
        ~Hosttopntable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hosttopnentry; //type: RmonMib::Hosttopntable::Hosttopnentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Hosttopntable::Hosttopnentry> > hosttopnentry;
        
}; // RmonMib::Hosttopntable


class RmonMib::Hosttopntable::Hosttopnentry : public Entity
{
    public:
        Hosttopnentry();
        ~Hosttopnentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hosttopnreport; //type: int32
        YLeaf hosttopnindex; //type: int32
        YLeaf hosttopnaddress; //type: binary
        YLeaf hosttopnrate; //type: int32

}; // RmonMib::Hosttopntable::Hosttopnentry


class RmonMib::Matrixcontroltable : public Entity
{
    public:
        Matrixcontroltable();
        ~Matrixcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Matrixcontrolentry; //type: RmonMib::Matrixcontroltable::Matrixcontrolentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Matrixcontroltable::Matrixcontrolentry> > matrixcontrolentry;
        
}; // RmonMib::Matrixcontroltable


class RmonMib::Matrixcontroltable::Matrixcontrolentry : public Entity
{
    public:
        Matrixcontrolentry();
        ~Matrixcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf matrixcontrolindex; //type: int32
        YLeaf matrixcontroldatasource; //type: string
        YLeaf matrixcontroltablesize; //type: int32
        YLeaf matrixcontrollastdeletetime; //type: uint32
        YLeaf matrixcontrolowner; //type: binary
        YLeaf matrixcontrolstatus; //type: EntrystatusEnum

}; // RmonMib::Matrixcontroltable::Matrixcontrolentry


class RmonMib::Matrixsdtable : public Entity
{
    public:
        Matrixsdtable();
        ~Matrixsdtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Matrixsdentry; //type: RmonMib::Matrixsdtable::Matrixsdentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Matrixsdtable::Matrixsdentry> > matrixsdentry;
        
}; // RmonMib::Matrixsdtable


class RmonMib::Matrixsdtable::Matrixsdentry : public Entity
{
    public:
        Matrixsdentry();
        ~Matrixsdentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf matrixsdindex; //type: int32
        YLeaf matrixsdsourceaddress; //type: binary
        YLeaf matrixsddestaddress; //type: binary
        YLeaf matrixsdpkts; //type: uint32
        YLeaf matrixsdoctets; //type: uint32
        YLeaf matrixsderrors; //type: uint32

}; // RmonMib::Matrixsdtable::Matrixsdentry


class RmonMib::Matrixdstable : public Entity
{
    public:
        Matrixdstable();
        ~Matrixdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Matrixdsentry; //type: RmonMib::Matrixdstable::Matrixdsentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Matrixdstable::Matrixdsentry> > matrixdsentry;
        
}; // RmonMib::Matrixdstable


class RmonMib::Matrixdstable::Matrixdsentry : public Entity
{
    public:
        Matrixdsentry();
        ~Matrixdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf matrixdsindex; //type: int32
        YLeaf matrixdsdestaddress; //type: binary
        YLeaf matrixdssourceaddress; //type: binary
        YLeaf matrixdspkts; //type: uint32
        YLeaf matrixdsoctets; //type: uint32
        YLeaf matrixdserrors; //type: uint32

}; // RmonMib::Matrixdstable::Matrixdsentry


class RmonMib::Filtertable : public Entity
{
    public:
        Filtertable();
        ~Filtertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Filterentry; //type: RmonMib::Filtertable::Filterentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Filtertable::Filterentry> > filterentry;
        
}; // RmonMib::Filtertable


class RmonMib::Filtertable::Filterentry : public Entity
{
    public:
        Filterentry();
        ~Filterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf filterindex; //type: int32
        YLeaf filterchannelindex; //type: int32
        YLeaf filterpktdataoffset; //type: int32
        YLeaf filterpktdata; //type: binary
        YLeaf filterpktdatamask; //type: binary
        YLeaf filterpktdatanotmask; //type: binary
        YLeaf filterpktstatus; //type: int32
        YLeaf filterpktstatusmask; //type: int32
        YLeaf filterpktstatusnotmask; //type: int32
        YLeaf filterowner; //type: binary
        YLeaf filterstatus; //type: EntrystatusEnum

}; // RmonMib::Filtertable::Filterentry


class RmonMib::Channeltable : public Entity
{
    public:
        Channeltable();
        ~Channeltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Channelentry; //type: RmonMib::Channeltable::Channelentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Channeltable::Channelentry> > channelentry;
        
}; // RmonMib::Channeltable


class RmonMib::Channeltable::Channelentry : public Entity
{
    public:
        Channelentry();
        ~Channelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf channelindex; //type: int32
        YLeaf channelifindex; //type: int32
        YLeaf channelaccepttype; //type: ChannelaccepttypeEnum
        YLeaf channeldatacontrol; //type: ChanneldatacontrolEnum
        YLeaf channelturnoneventindex; //type: int32
        YLeaf channelturnoffeventindex; //type: int32
        YLeaf channeleventindex; //type: int32
        YLeaf channeleventstatus; //type: ChanneleventstatusEnum
        YLeaf channelmatches; //type: uint32
        YLeaf channeldescription; //type: string
        YLeaf channelowner; //type: binary
        YLeaf channelstatus; //type: EntrystatusEnum
        class ChannelaccepttypeEnum;
        class ChanneldatacontrolEnum;
        class ChanneleventstatusEnum;

}; // RmonMib::Channeltable::Channelentry


class RmonMib::Buffercontroltable : public Entity
{
    public:
        Buffercontroltable();
        ~Buffercontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Buffercontrolentry; //type: RmonMib::Buffercontroltable::Buffercontrolentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Buffercontroltable::Buffercontrolentry> > buffercontrolentry;
        
}; // RmonMib::Buffercontroltable


class RmonMib::Buffercontroltable::Buffercontrolentry : public Entity
{
    public:
        Buffercontrolentry();
        ~Buffercontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf buffercontrolindex; //type: int32
        YLeaf buffercontrolchannelindex; //type: int32
        YLeaf buffercontrolfullstatus; //type: BuffercontrolfullstatusEnum
        YLeaf buffercontrolfullaction; //type: BuffercontrolfullactionEnum
        YLeaf buffercontrolcaptureslicesize; //type: int32
        YLeaf buffercontroldownloadslicesize; //type: int32
        YLeaf buffercontroldownloadoffset; //type: int32
        YLeaf buffercontrolmaxoctetsrequested; //type: int32
        YLeaf buffercontrolmaxoctetsgranted; //type: int32
        YLeaf buffercontrolcapturedpackets; //type: int32
        YLeaf buffercontrolturnontime; //type: uint32
        YLeaf buffercontrolowner; //type: binary
        YLeaf buffercontrolstatus; //type: EntrystatusEnum
        class BuffercontrolfullstatusEnum;
        class BuffercontrolfullactionEnum;

}; // RmonMib::Buffercontroltable::Buffercontrolentry


class RmonMib::Capturebuffertable : public Entity
{
    public:
        Capturebuffertable();
        ~Capturebuffertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Capturebufferentry; //type: RmonMib::Capturebuffertable::Capturebufferentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Capturebuffertable::Capturebufferentry> > capturebufferentry;
        
}; // RmonMib::Capturebuffertable


class RmonMib::Capturebuffertable::Capturebufferentry : public Entity
{
    public:
        Capturebufferentry();
        ~Capturebufferentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf capturebuffercontrolindex; //type: int32
        YLeaf capturebufferindex; //type: int32
        YLeaf capturebufferpacketid; //type: int32
        YLeaf capturebufferpacketdata; //type: binary
        YLeaf capturebufferpacketlength; //type: int32
        YLeaf capturebufferpackettime; //type: int32
        YLeaf capturebufferpacketstatus; //type: int32

}; // RmonMib::Capturebuffertable::Capturebufferentry


class RmonMib::Eventtable : public Entity
{
    public:
        Eventtable();
        ~Eventtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Evententry; //type: RmonMib::Eventtable::Evententry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Eventtable::Evententry> > evententry;
        
}; // RmonMib::Eventtable


class RmonMib::Eventtable::Evententry : public Entity
{
    public:
        Evententry();
        ~Evententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eventindex; //type: int32
        YLeaf eventdescription; //type: string
        YLeaf eventtype; //type: EventtypeEnum
        YLeaf eventcommunity; //type: binary
        YLeaf eventlasttimesent; //type: uint32
        YLeaf eventowner; //type: binary
        YLeaf eventstatus; //type: EntrystatusEnum
        class EventtypeEnum;

}; // RmonMib::Eventtable::Evententry


class RmonMib::Logtable : public Entity
{
    public:
        Logtable();
        ~Logtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Logentry; //type: RmonMib::Logtable::Logentry

        std::vector<std::shared_ptr<RMON_MIB::RmonMib::Logtable::Logentry> > logentry;
        
}; // RmonMib::Logtable


class RmonMib::Logtable::Logentry : public Entity
{
    public:
        Logentry();
        ~Logentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logeventindex; //type: int32
        YLeaf logindex; //type: int32
        YLeaf logtime; //type: uint32
        YLeaf logdescription; //type: string

}; // RmonMib::Logtable::Logentry

class EntrystatusEnum : public Enum
{
    public:
        static const Enum::YLeaf valid;
        static const Enum::YLeaf createRequest;
        static const Enum::YLeaf underCreation;
        static const Enum::YLeaf invalid;

};

class RmonMib::Alarmtable::Alarmentry::AlarmsampletypeEnum : public Enum
{
    public:
        static const Enum::YLeaf absoluteValue;
        static const Enum::YLeaf deltaValue;

};

class RmonMib::Alarmtable::Alarmentry::AlarmstartupalarmEnum : public Enum
{
    public:
        static const Enum::YLeaf risingAlarm;
        static const Enum::YLeaf fallingAlarm;
        static const Enum::YLeaf risingOrFallingAlarm;

};

class RmonMib::Hosttopncontroltable::Hosttopncontrolentry::HosttopnratebaseEnum : public Enum
{
    public:
        static const Enum::YLeaf hostTopNInPkts;
        static const Enum::YLeaf hostTopNOutPkts;
        static const Enum::YLeaf hostTopNInOctets;
        static const Enum::YLeaf hostTopNOutOctets;
        static const Enum::YLeaf hostTopNOutErrors;
        static const Enum::YLeaf hostTopNOutBroadcastPkts;
        static const Enum::YLeaf hostTopNOutMulticastPkts;

};

class RmonMib::Channeltable::Channelentry::ChannelaccepttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf acceptMatched;
        static const Enum::YLeaf acceptFailed;

};

class RmonMib::Channeltable::Channelentry::ChanneldatacontrolEnum : public Enum
{
    public:
        static const Enum::YLeaf on;
        static const Enum::YLeaf off;

};

class RmonMib::Channeltable::Channelentry::ChanneleventstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf eventReady;
        static const Enum::YLeaf eventFired;
        static const Enum::YLeaf eventAlwaysReady;

};

class RmonMib::Buffercontroltable::Buffercontrolentry::BuffercontrolfullstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf spaceAvailable;
        static const Enum::YLeaf full;

};

class RmonMib::Buffercontroltable::Buffercontrolentry::BuffercontrolfullactionEnum : public Enum
{
    public:
        static const Enum::YLeaf lockWhenFull;
        static const Enum::YLeaf wrapWhenFull;

};

class RmonMib::Eventtable::Evententry::EventtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf log;
        static const Enum::YLeaf snmptrap;
        static const Enum::YLeaf logandtrap;

};


}
}

#endif /* _RMON_MIB_ */

