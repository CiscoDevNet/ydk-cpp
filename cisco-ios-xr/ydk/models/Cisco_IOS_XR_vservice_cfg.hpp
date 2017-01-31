#ifndef _CISCO_IOS_XR_VSERVICE_CFG_
#define _CISCO_IOS_XR_VSERVICE_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_vservice_cfg {

class Vservice : public Entity
{
    public:
        Vservice();
        ~Vservice();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class ServiceFunctionLocator : public Entity
    {
        public:
            ServiceFunctionLocator();
            ~ServiceFunctionLocator();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Names : public Entity
        {
            public:
                Names();
                ~Names();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Name : public Entity
            {
                public:
                    Name();
                    ~Name();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf function_name; //type: string
                    YLeaf locator_id; //type: uint32

                class Node : public Entity
                {
                    public:
                        Node();
                        ~Node();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf transport; //type: SfcSfTransportEnum
                        YLeaf ipv4_source_address; //type: string
                        YLeaf ipv4_destination_address; //type: string
                        YLeaf vni; //type: int32



                }; // Vservice::ServiceFunctionLocator::Names::Name::Node


                    std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionLocator::Names::Name::Node> node;


            }; // Vservice::ServiceFunctionLocator::Names::Name


                std::vector<std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionLocator::Names::Name> > name;


        }; // Vservice::ServiceFunctionLocator::Names


            std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionLocator::Names> names;


    }; // Vservice::ServiceFunctionLocator


    class MetadataDispositions : public Entity
    {
        public:
            MetadataDispositions();
            ~MetadataDispositions();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class MetadataDisposition : public Entity
        {
            public:
                MetadataDisposition();
                ~MetadataDisposition();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf disposition_name; //type: string
                YLeaf format; //type: SfcMetadataType1AllocFormatEnum

            class MatchEntry : public Entity
            {
                public:
                    MatchEntry();
                    ~MatchEntry();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf match_entry_name; //type: string

                class Node : public Entity
                {
                    public:
                        Node();
                        ~Node();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf match_type; //type: SfcMetadataDispositionMatchEnum
                        YLeaf action_type; //type: SfcMetadataDispositionActionEnum
                        YLeaf vrf; //type: string
                        YLeaf nexthop_ipv4_address; //type: string
                        YLeafList tenant_id; //type: list of  int32



                }; // Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node


                    std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node> node;


            }; // Vservice::MetadataDispositions::MetadataDisposition::MatchEntry


                std::vector<std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataDispositions::MetadataDisposition::MatchEntry> > match_entry;


        }; // Vservice::MetadataDispositions::MetadataDisposition


            std::vector<std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataDispositions::MetadataDisposition> > metadata_disposition;


    }; // Vservice::MetadataDispositions


    class ServiceFunctionForwardLocator : public Entity
    {
        public:
            ServiceFunctionForwardLocator();
            ~ServiceFunctionForwardLocator();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Names : public Entity
        {
            public:
                Names();
                ~Names();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Name : public Entity
            {
                public:
                    Name();
                    ~Name();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf function_name; //type: string
                    YLeaf locator_id; //type: uint32

                class Node : public Entity
                {
                    public:
                        Node();
                        ~Node();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf transport; //type: SfcSfTransportEnum
                        YLeaf ipv4_source_address; //type: string
                        YLeaf ipv4_destination_address; //type: string
                        YLeaf vni; //type: int32



                }; // Vservice::ServiceFunctionForwardLocator::Names::Name::Node


                    std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionForwardLocator::Names::Name::Node> node;


            }; // Vservice::ServiceFunctionForwardLocator::Names::Name


                std::vector<std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionForwardLocator::Names::Name> > name;


        }; // Vservice::ServiceFunctionForwardLocator::Names


            std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionForwardLocator::Names> names;


    }; // Vservice::ServiceFunctionForwardLocator


    class MetadataTemplates : public Entity
    {
        public:
            MetadataTemplates();
            ~MetadataTemplates();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class MetadataTemplate : public Entity
        {
            public:
                MetadataTemplate();
                ~MetadataTemplate();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf metadata_name; //type: string
                YLeaf type; //type: SfcMetadataAllocEnum
                YLeaf format; //type: SfcMetadataType1AllocFormatEnum
                YLeaf tenant_id; //type: uint32



        }; // Vservice::MetadataTemplates::MetadataTemplate


            std::vector<std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataTemplates::MetadataTemplate> > metadata_template;


    }; // Vservice::MetadataTemplates


    class ServiceFunctionPath : public Entity
    {
        public:
            ServiceFunctionPath();
            ~ServiceFunctionPath();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Paths : public Entity
        {
            public:
                Paths();
                ~Paths();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Path : public Entity
            {
                public:
                    Path();
                    ~Path();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf path_id; //type: uint32

                class ServiceIndex : public Entity
                {
                    public:
                        ServiceIndex();
                        ~ServiceIndex();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf index_; //type: uint32

                    class Terminate : public Entity
                    {
                        public:
                            Terminate();
                            ~Terminate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Node : public Entity
                        {
                            public:
                                Node();
                                ~Node();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf action; //type: SfcMetadataDispositionActionEnum
                                YLeaf vrf; //type: string
                                YLeaf nexthop_ipv4_address; //type: string
                                YLeaf metatdata_disposition; //type: string



                        }; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node


                            std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node> node;


                    }; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate


                    class SffNames : public Entity
                    {
                        public:
                            SffNames();
                            ~SffNames();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SffName : public Entity
                        {
                            public:
                                SffName();
                                ~SffName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf name; //type: string

                            class Node : public Entity
                            {
                                public:
                                    Node();
                                    ~Node();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf enable; //type: empty
                                    YLeaf reserved; //type: empty



                            }; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node


                                std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node> node;


                        }; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName


                            std::vector<std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName> > sff_name;


                    }; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames


                    class SfNames : public Entity
                    {
                        public:
                            SfNames();
                            ~SfNames();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class SfName : public Entity
                        {
                            public:
                                SfName();
                                ~SfName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf name; //type: string

                            class Node : public Entity
                            {
                                public:
                                    Node();
                                    ~Node();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf enable; //type: empty
                                    YLeaf reserved; //type: empty



                            }; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node


                                std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node> node;


                        }; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName


                            std::vector<std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName> > sf_name;


                    }; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames


                        std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames> sf_names;
                        std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames> sff_names;
                        std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate> terminate;


                }; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex


                    std::vector<std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex> > service_index;


            }; // Vservice::ServiceFunctionPath::Paths::Path


                std::vector<std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path> > path;


        }; // Vservice::ServiceFunctionPath::Paths


            std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths> paths;


    }; // Vservice::ServiceFunctionPath


        std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataDispositions> metadata_dispositions;
        std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataTemplates> metadata_templates;
        std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionForwardLocator> service_function_forward_locator;
        std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionLocator> service_function_locator;
        std::unique_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath> service_function_path;


}; // Vservice


class SfcSfTransportEnum : public Enum
{
    public:
        static const Enum::YLeaf vxlan_gpe;

};

class SfcMetadataDispositionMatchEnum : public Enum
{
    public:
        static const Enum::YLeaf type1_dcalloc_tenant_id;

};

class SfcMetadataAllocEnum : public Enum
{
    public:
        static const Enum::YLeaf type1;

};

class SfcMetadataType1AllocFormatEnum : public Enum
{
    public:
        static const Enum::YLeaf dc_allocation;

};

class SfcMetadataDispositionActionEnum : public Enum
{
    public:
        static const Enum::YLeaf redirect_nexthop;

};


}
}

#endif /* _CISCO_IOS_XR_VSERVICE_CFG_ */

