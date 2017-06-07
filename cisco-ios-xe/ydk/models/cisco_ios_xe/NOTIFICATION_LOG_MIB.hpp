#ifndef _NOTIFICATION_LOG_MIB_
#define _NOTIFICATION_LOG_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace NOTIFICATION_LOG_MIB {

class NotificationLogMib : public Entity
{
    public:
        NotificationLogMib();
        ~NotificationLogMib();

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

        class Nlmconfig; //type: NotificationLogMib::Nlmconfig
        class Nlmstats; //type: NotificationLogMib::Nlmstats
        class Nlmconfiglogtable; //type: NotificationLogMib::Nlmconfiglogtable
        class Nlmlogtable; //type: NotificationLogMib::Nlmlogtable
        class Nlmlogvariabletable; //type: NotificationLogMib::Nlmlogvariabletable

        std::shared_ptr<NOTIFICATION_LOG_MIB::NotificationLogMib::Nlmconfig> nlmconfig;
        std::shared_ptr<NOTIFICATION_LOG_MIB::NotificationLogMib::Nlmconfiglogtable> nlmconfiglogtable;
        std::shared_ptr<NOTIFICATION_LOG_MIB::NotificationLogMib::Nlmlogtable> nlmlogtable;
        std::shared_ptr<NOTIFICATION_LOG_MIB::NotificationLogMib::Nlmlogvariabletable> nlmlogvariabletable;
        std::shared_ptr<NOTIFICATION_LOG_MIB::NotificationLogMib::Nlmstats> nlmstats;
        
}; // NotificationLogMib


class NotificationLogMib::Nlmconfig : public Entity
{
    public:
        Nlmconfig();
        ~Nlmconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nlmconfigglobalentrylimit; //type: uint32
        YLeaf nlmconfigglobalageout; //type: uint32

}; // NotificationLogMib::Nlmconfig


class NotificationLogMib::Nlmstats : public Entity
{
    public:
        Nlmstats();
        ~Nlmstats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nlmstatsglobalnotificationslogged; //type: uint32
        YLeaf nlmstatsglobalnotificationsbumped; //type: uint32

}; // NotificationLogMib::Nlmstats


class NotificationLogMib::Nlmconfiglogtable : public Entity
{
    public:
        Nlmconfiglogtable();
        ~Nlmconfiglogtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nlmconfiglogentry; //type: NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry

        std::vector<std::shared_ptr<NOTIFICATION_LOG_MIB::NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry> > nlmconfiglogentry;
        
}; // NotificationLogMib::Nlmconfiglogtable


class NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry : public Entity
{
    public:
        Nlmconfiglogentry();
        ~Nlmconfiglogentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nlmlogname; //type: string
        YLeaf nlmconfiglogfiltername; //type: string
        YLeaf nlmconfiglogentrylimit; //type: uint32
        YLeaf nlmconfiglogadminstatus; //type: NlmconfiglogadminstatusEnum
        YLeaf nlmconfiglogoperstatus; //type: NlmconfiglogoperstatusEnum
        YLeaf nlmconfiglogstoragetype; //type: StoragetypeEnum
        YLeaf nlmconfiglogentrystatus; //type: RowstatusEnum
        YLeaf nlmstatslognotificationslogged; //type: uint32
        YLeaf nlmstatslognotificationsbumped; //type: uint32
        class NlmconfiglogadminstatusEnum;
        class NlmconfiglogoperstatusEnum;

}; // NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry


class NotificationLogMib::Nlmlogtable : public Entity
{
    public:
        Nlmlogtable();
        ~Nlmlogtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nlmlogentry; //type: NotificationLogMib::Nlmlogtable::Nlmlogentry

        std::vector<std::shared_ptr<NOTIFICATION_LOG_MIB::NotificationLogMib::Nlmlogtable::Nlmlogentry> > nlmlogentry;
        
}; // NotificationLogMib::Nlmlogtable


class NotificationLogMib::Nlmlogtable::Nlmlogentry : public Entity
{
    public:
        Nlmlogentry();
        ~Nlmlogentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to NOTIFICATION_LOG_MIB::NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::nlmlogname)
        YLeaf nlmlogname;
        YLeaf nlmlogindex; //type: uint32
        YLeaf nlmlogtime; //type: uint32
        YLeaf nlmlogdateandtime; //type: string
        YLeaf nlmlogengineid; //type: binary
        YLeaf nlmlogenginetaddress; //type: binary
        YLeaf nlmlogenginetdomain; //type: string
        YLeaf nlmlogcontextengineid; //type: binary
        YLeaf nlmlogcontextname; //type: string
        YLeaf nlmlognotificationid; //type: string

}; // NotificationLogMib::Nlmlogtable::Nlmlogentry


class NotificationLogMib::Nlmlogvariabletable : public Entity
{
    public:
        Nlmlogvariabletable();
        ~Nlmlogvariabletable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nlmlogvariableentry; //type: NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry

        std::vector<std::shared_ptr<NOTIFICATION_LOG_MIB::NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry> > nlmlogvariableentry;
        
}; // NotificationLogMib::Nlmlogvariabletable


class NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry : public Entity
{
    public:
        Nlmlogvariableentry();
        ~Nlmlogvariableentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to NOTIFICATION_LOG_MIB::NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::nlmlogname)
        YLeaf nlmlogname;
        //type: uint32 (refers to NOTIFICATION_LOG_MIB::NotificationLogMib::Nlmlogtable::Nlmlogentry::nlmlogindex)
        YLeaf nlmlogindex;
        YLeaf nlmlogvariableindex; //type: uint32
        YLeaf nlmlogvariableid; //type: string
        YLeaf nlmlogvariablevaluetype; //type: NlmlogvariablevaluetypeEnum
        YLeaf nlmlogvariablecounter32val; //type: uint32
        YLeaf nlmlogvariableunsigned32val; //type: uint32
        YLeaf nlmlogvariabletimeticksval; //type: uint32
        YLeaf nlmlogvariableinteger32val; //type: int32
        YLeaf nlmlogvariableoctetstringval; //type: binary
        YLeaf nlmlogvariableipaddressval; //type: string
        YLeaf nlmlogvariableoidval; //type: string
        YLeaf nlmlogvariablecounter64val; //type: uint64
        YLeaf nlmlogvariableopaqueval; //type: binary
        class NlmlogvariablevaluetypeEnum;

}; // NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry

class NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::NlmconfiglogadminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class NotificationLogMib::Nlmconfiglogtable::Nlmconfiglogentry::NlmconfiglogoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf operational;
        static const Enum::YLeaf noFilter;

};

class NotificationLogMib::Nlmlogvariabletable::Nlmlogvariableentry::NlmlogvariablevaluetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf counter32;
        static const Enum::YLeaf unsigned32;
        static const Enum::YLeaf timeTicks;
        static const Enum::YLeaf integer32;
        static const Enum::YLeaf ipAddress;
        static const Enum::YLeaf octetString;
        static const Enum::YLeaf objectId;
        static const Enum::YLeaf counter64;
        static const Enum::YLeaf opaque;

};


}
}

#endif /* _NOTIFICATION_LOG_MIB_ */

