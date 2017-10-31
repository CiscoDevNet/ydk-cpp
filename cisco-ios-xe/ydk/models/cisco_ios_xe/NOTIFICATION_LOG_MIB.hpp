#ifndef _NOTIFICATION_LOG_MIB_
#define _NOTIFICATION_LOG_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace NOTIFICATION_LOG_MIB {

class NOTIFICATIONLOGMIB : public ydk::Entity
{
    public:
        NOTIFICATIONLOGMIB();
        ~NOTIFICATIONLOGMIB();

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

        class Nlmconfig; //type: NOTIFICATIONLOGMIB::Nlmconfig
        class Nlmstats; //type: NOTIFICATIONLOGMIB::Nlmstats
        class Nlmconfiglogtable; //type: NOTIFICATIONLOGMIB::Nlmconfiglogtable
        class Nlmlogtable; //type: NOTIFICATIONLOGMIB::Nlmlogtable
        class Nlmlogvariabletable; //type: NOTIFICATIONLOGMIB::Nlmlogvariabletable

        std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::Nlmconfig> nlmconfig;
        std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::Nlmstats> nlmstats;
        std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::Nlmconfiglogtable> nlmconfiglogtable;
        std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::Nlmlogtable> nlmlogtable;
        std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::Nlmlogvariabletable> nlmlogvariabletable;
        
}; // NOTIFICATIONLOGMIB


class NOTIFICATIONLOGMIB::Nlmconfig : public ydk::Entity
{
    public:
        Nlmconfig();
        ~Nlmconfig();

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

        ydk::YLeaf nlmconfigglobalentrylimit; //type: uint32
        ydk::YLeaf nlmconfigglobalageout; //type: uint32

}; // NOTIFICATIONLOGMIB::Nlmconfig


class NOTIFICATIONLOGMIB::Nlmstats : public ydk::Entity
{
    public:
        Nlmstats();
        ~Nlmstats();

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

        ydk::YLeaf nlmstatsglobalnotificationslogged; //type: uint32
        ydk::YLeaf nlmstatsglobalnotificationsbumped; //type: uint32

}; // NOTIFICATIONLOGMIB::Nlmstats


class NOTIFICATIONLOGMIB::Nlmconfiglogtable : public ydk::Entity
{
    public:
        Nlmconfiglogtable();
        ~Nlmconfiglogtable();

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

        class Nlmconfiglogentry; //type: NOTIFICATIONLOGMIB::Nlmconfiglogtable::Nlmconfiglogentry

        std::vector<std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::Nlmconfiglogtable::Nlmconfiglogentry> > nlmconfiglogentry;
        
}; // NOTIFICATIONLOGMIB::Nlmconfiglogtable


class NOTIFICATIONLOGMIB::Nlmconfiglogtable::Nlmconfiglogentry : public ydk::Entity
{
    public:
        Nlmconfiglogentry();
        ~Nlmconfiglogentry();

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

        ydk::YLeaf nlmlogname; //type: string
        ydk::YLeaf nlmconfiglogfiltername; //type: string
        ydk::YLeaf nlmconfiglogentrylimit; //type: uint32
        ydk::YLeaf nlmconfiglogadminstatus; //type: Nlmconfiglogadminstatus
        ydk::YLeaf nlmconfiglogoperstatus; //type: Nlmconfiglogoperstatus
        ydk::YLeaf nlmconfiglogstoragetype; //type: StorageType
        ydk::YLeaf nlmconfiglogentrystatus; //type: RowStatus
        ydk::YLeaf nlmstatslognotificationslogged; //type: uint32
        ydk::YLeaf nlmstatslognotificationsbumped; //type: uint32
        class Nlmconfiglogadminstatus;
        class Nlmconfiglogoperstatus;

}; // NOTIFICATIONLOGMIB::Nlmconfiglogtable::Nlmconfiglogentry


class NOTIFICATIONLOGMIB::Nlmlogtable : public ydk::Entity
{
    public:
        Nlmlogtable();
        ~Nlmlogtable();

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

        class Nlmlogentry; //type: NOTIFICATIONLOGMIB::Nlmlogtable::Nlmlogentry

        std::vector<std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::Nlmlogtable::Nlmlogentry> > nlmlogentry;
        
}; // NOTIFICATIONLOGMIB::Nlmlogtable


class NOTIFICATIONLOGMIB::Nlmlogtable::Nlmlogentry : public ydk::Entity
{
    public:
        Nlmlogentry();
        ~Nlmlogentry();

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

        //type: string (refers to cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::Nlmconfiglogtable::Nlmconfiglogentry::nlmlogname)
        ydk::YLeaf nlmlogname;
        ydk::YLeaf nlmlogindex; //type: uint32
        ydk::YLeaf nlmlogtime; //type: uint32
        ydk::YLeaf nlmlogdateandtime; //type: string
        ydk::YLeaf nlmlogengineid; //type: binary
        ydk::YLeaf nlmlogenginetaddress; //type: binary
        ydk::YLeaf nlmlogenginetdomain; //type: string
        ydk::YLeaf nlmlogcontextengineid; //type: binary
        ydk::YLeaf nlmlogcontextname; //type: string
        ydk::YLeaf nlmlognotificationid; //type: string

}; // NOTIFICATIONLOGMIB::Nlmlogtable::Nlmlogentry


class NOTIFICATIONLOGMIB::Nlmlogvariabletable : public ydk::Entity
{
    public:
        Nlmlogvariabletable();
        ~Nlmlogvariabletable();

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

        class Nlmlogvariableentry; //type: NOTIFICATIONLOGMIB::Nlmlogvariabletable::Nlmlogvariableentry

        std::vector<std::shared_ptr<cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::Nlmlogvariabletable::Nlmlogvariableentry> > nlmlogvariableentry;
        
}; // NOTIFICATIONLOGMIB::Nlmlogvariabletable


class NOTIFICATIONLOGMIB::Nlmlogvariabletable::Nlmlogvariableentry : public ydk::Entity
{
    public:
        Nlmlogvariableentry();
        ~Nlmlogvariableentry();

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

        //type: string (refers to cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::Nlmconfiglogtable::Nlmconfiglogentry::nlmlogname)
        ydk::YLeaf nlmlogname;
        //type: uint32 (refers to cisco_ios_xe::NOTIFICATION_LOG_MIB::NOTIFICATIONLOGMIB::Nlmlogtable::Nlmlogentry::nlmlogindex)
        ydk::YLeaf nlmlogindex;
        ydk::YLeaf nlmlogvariableindex; //type: uint32
        ydk::YLeaf nlmlogvariableid; //type: string
        ydk::YLeaf nlmlogvariablevaluetype; //type: Nlmlogvariablevaluetype
        ydk::YLeaf nlmlogvariablecounter32val; //type: uint32
        ydk::YLeaf nlmlogvariableunsigned32val; //type: uint32
        ydk::YLeaf nlmlogvariabletimeticksval; //type: uint32
        ydk::YLeaf nlmlogvariableinteger32val; //type: int32
        ydk::YLeaf nlmlogvariableoctetstringval; //type: binary
        ydk::YLeaf nlmlogvariableipaddressval; //type: string
        ydk::YLeaf nlmlogvariableoidval; //type: string
        ydk::YLeaf nlmlogvariablecounter64val; //type: uint64
        ydk::YLeaf nlmlogvariableopaqueval; //type: binary
        class Nlmlogvariablevaluetype;

}; // NOTIFICATIONLOGMIB::Nlmlogvariabletable::Nlmlogvariableentry

class NOTIFICATIONLOGMIB::Nlmconfiglogtable::Nlmconfiglogentry::Nlmconfiglogadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class NOTIFICATIONLOGMIB::Nlmconfiglogtable::Nlmconfiglogentry::Nlmconfiglogoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf noFilter;

};

class NOTIFICATIONLOGMIB::Nlmlogvariabletable::Nlmlogvariableentry::Nlmlogvariablevaluetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf counter32;
        static const ydk::Enum::YLeaf unsigned32;
        static const ydk::Enum::YLeaf timeTicks;
        static const ydk::Enum::YLeaf integer32;
        static const ydk::Enum::YLeaf ipAddress;
        static const ydk::Enum::YLeaf octetString;
        static const ydk::Enum::YLeaf objectId;
        static const ydk::Enum::YLeaf counter64;
        static const ydk::Enum::YLeaf opaque;

};


}
}

#endif /* _NOTIFICATION_LOG_MIB_ */

