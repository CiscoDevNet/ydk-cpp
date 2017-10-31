#ifndef _ETHER_WIS_
#define _ETHER_WIS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ETHER_WIS {

class ETHERWIS : public ydk::Entity
{
    public:
        ETHERWIS();
        ~ETHERWIS();

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

        class Etherwisdevicetable; //type: ETHERWIS::Etherwisdevicetable
        class Etherwissectioncurrenttable; //type: ETHERWIS::Etherwissectioncurrenttable
        class Etherwispathcurrenttable; //type: ETHERWIS::Etherwispathcurrenttable
        class Etherwisfarendpathcurrenttable; //type: ETHERWIS::Etherwisfarendpathcurrenttable

        std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::Etherwisdevicetable> etherwisdevicetable;
        std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::Etherwissectioncurrenttable> etherwissectioncurrenttable;
        std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::Etherwispathcurrenttable> etherwispathcurrenttable;
        std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::Etherwisfarendpathcurrenttable> etherwisfarendpathcurrenttable;
        
}; // ETHERWIS


class ETHERWIS::Etherwisdevicetable : public ydk::Entity
{
    public:
        Etherwisdevicetable();
        ~Etherwisdevicetable();

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

        class Etherwisdeviceentry; //type: ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry

        std::vector<std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry> > etherwisdeviceentry;
        
}; // ETHERWIS::Etherwisdevicetable


class ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry : public ydk::Entity
{
    public:
        Etherwisdeviceentry();
        ~Etherwisdeviceentry();

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
        ydk::YLeaf etherwisdevicetxtestpatternmode; //type: Etherwisdevicetxtestpatternmode
        ydk::YLeaf etherwisdevicerxtestpatternmode; //type: Etherwisdevicerxtestpatternmode
        ydk::YLeaf etherwisdevicerxtestpatternerrors; //type: uint32
        class Etherwisdevicetxtestpatternmode;
        class Etherwisdevicerxtestpatternmode;

}; // ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry


class ETHERWIS::Etherwissectioncurrenttable : public ydk::Entity
{
    public:
        Etherwissectioncurrenttable();
        ~Etherwissectioncurrenttable();

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

        class Etherwissectioncurrententry; //type: ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry> > etherwissectioncurrententry;
        
}; // ETHERWIS::Etherwissectioncurrenttable


class ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry : public ydk::Entity
{
    public:
        Etherwissectioncurrententry();
        ~Etherwissectioncurrententry();

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
        ydk::YLeaf etherwissectioncurrentj0transmitted; //type: binary
        ydk::YLeaf etherwissectioncurrentj0received; //type: binary

}; // ETHERWIS::Etherwissectioncurrenttable::Etherwissectioncurrententry


class ETHERWIS::Etherwispathcurrenttable : public ydk::Entity
{
    public:
        Etherwispathcurrenttable();
        ~Etherwispathcurrenttable();

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

        class Etherwispathcurrententry; //type: ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry> > etherwispathcurrententry;
        
}; // ETHERWIS::Etherwispathcurrenttable


class ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry : public ydk::Entity
{
    public:
        Etherwispathcurrententry();
        ~Etherwispathcurrententry();

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
        ydk::YLeaf etherwispathcurrentstatus; //type: Etherwispathcurrentstatus
        ydk::YLeaf etherwispathcurrentj1transmitted; //type: binary
        ydk::YLeaf etherwispathcurrentj1received; //type: binary

}; // ETHERWIS::Etherwispathcurrenttable::Etherwispathcurrententry


class ETHERWIS::Etherwisfarendpathcurrenttable : public ydk::Entity
{
    public:
        Etherwisfarendpathcurrenttable();
        ~Etherwisfarendpathcurrenttable();

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

        class Etherwisfarendpathcurrententry; //type: ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry

        std::vector<std::shared_ptr<cisco_ios_xe::ETHER_WIS::ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry> > etherwisfarendpathcurrententry;
        
}; // ETHERWIS::Etherwisfarendpathcurrenttable


class ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry : public ydk::Entity
{
    public:
        Etherwisfarendpathcurrententry();
        ~Etherwisfarendpathcurrententry();

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
        ydk::YLeaf etherwisfarendpathcurrentstatus; //type: Etherwisfarendpathcurrentstatus

}; // ETHERWIS::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry

class ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicetxtestpatternmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf squareWave;
        static const ydk::Enum::YLeaf prbs31;
        static const ydk::Enum::YLeaf mixedFrequency;

};

class ETHERWIS::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicerxtestpatternmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf prbs31;
        static const ydk::Enum::YLeaf mixedFrequency;

};


}
}

#endif /* _ETHER_WIS_ */

