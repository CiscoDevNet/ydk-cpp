#ifndef _CISCO_IOS_XR_MPLS_STATIC_CFG_
#define _CISCO_IOS_XR_MPLS_STATIC_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_static_cfg {

class MplsStatic : public Entity
{
    public:
        MplsStatic();
        ~MplsStatic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value enable; //type: empty


    class Vrfs : public Entity
    {
        public:
            Vrfs();
            ~Vrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Vrf : public Entity
        {
            public:
                Vrf();
                ~Vrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value vrf_name; //type: string
                Value enable; //type: empty


            class LabelSwitchedPaths : public Entity
            {
                public:
                    LabelSwitchedPaths();
                    ~LabelSwitchedPaths();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class LabelSwitchedPath : public Entity
                {
                    public:
                        LabelSwitchedPath();
                        ~LabelSwitchedPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value lsp_name; //type: string
                        Value enable; //type: empty


                    class InLabel : public Entity
                    {
                        public:
                            InLabel();
                            ~InLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value in_label_value; //type: uint32
                            Value label_mode; //type: MplsStaticLabelModeEnum
                            Value prefix; //type: string
                            Value prefix_length; //type: int32


                            class MplsStaticLabelModeEnum;


                    }; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel


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
                                Value path_id; //type: uint32
                                Value path_type; //type: MplsStaticPathEnum
                                Value label_type; //type: MplsStaticOutLabelTypesEnum
                                Value next_hop_label; //type: uint32
                                Value next_hop_address; //type: string
                                Value interface_name; //type: string


                                class MplsStaticOutLabelTypesEnum;
                                class MplsStaticPathEnum;


                        }; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path> > path;


                    }; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths


                        std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel> in_label;
                        std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath::Paths> paths;


                }; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths::LabelSwitchedPath> > label_switched_path;


            }; // MplsStatic::Vrfs::Vrf::LabelSwitchedPaths


            class Afs : public Entity
            {
                public:
                    Afs();
                    ~Afs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Af : public Entity
                {
                    public:
                        Af();
                        ~Af();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value afi; //type: MplsStaticAddressFamilyEnum
                        Value enable; //type: empty


                    class TopLabelHash : public Entity
                    {
                        public:
                            TopLabelHash();
                            ~TopLabelHash();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LocalLabels : public Entity
                        {
                            public:
                                LocalLabels();
                                ~LocalLabels();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class LocalLabel : public Entity
                            {
                                public:
                                    LocalLabel();
                                    ~LocalLabel();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value local_label_id; //type: uint32


                                class LabelType : public Entity
                                {
                                    public:
                                        LabelType();
                                        ~LabelType();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value label_mode; //type: MplsStaticLabelModeEnum
                                        Value prefix; //type: string
                                        Value prefix_length; //type: int32


                                        class MplsStaticLabelModeEnum;


                                }; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType


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
                                            Value path_id; //type: uint32
                                            Value path_type; //type: MplsStaticPathEnum
                                            Value label_type; //type: MplsStaticOutLabelTypesEnum
                                            Value next_hop_label; //type: uint32
                                            Value next_hop_address; //type: string
                                            Value interface_name; //type: string


                                            class MplsStaticOutLabelTypesEnum;
                                            class MplsStaticPathEnum;


                                    }; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path> > path;


                                }; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths


                                    std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType> label_type;
                                    std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths> paths;


                            }; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel


                                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel> > local_label;


                        }; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels


                            std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash::LocalLabels> local_labels;


                    }; // MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash


                    class LocalLabels : public Entity
                    {
                        public:
                            LocalLabels();
                            ~LocalLabels();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LocalLabel : public Entity
                        {
                            public:
                                LocalLabel();
                                ~LocalLabel();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value local_label_id; //type: uint32


                            class LabelType : public Entity
                            {
                                public:
                                    LabelType();
                                    ~LabelType();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value label_mode; //type: MplsStaticLabelModeEnum
                                    Value prefix; //type: string
                                    Value prefix_length; //type: int32


                                    class MplsStaticLabelModeEnum;


                            }; // MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType


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
                                        Value path_id; //type: uint32
                                        Value path_type; //type: MplsStaticPathEnum
                                        Value label_type; //type: MplsStaticOutLabelTypesEnum
                                        Value next_hop_label; //type: uint32
                                        Value next_hop_address; //type: string
                                        Value interface_name; //type: string


                                        class MplsStaticOutLabelTypesEnum;
                                        class MplsStaticPathEnum;


                                }; // MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path> > path;


                            }; // MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths


                                std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::LabelType> label_type;
                                std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel::Paths> paths;


                        }; // MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels::LocalLabel> > local_label;


                    }; // MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels


                        std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::LocalLabels> local_labels;
                        std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af::TopLabelHash> top_label_hash;
                        class MplsStaticAddressFamilyEnum;


                }; // MplsStatic::Vrfs::Vrf::Afs::Af


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs::Af> > af;


            }; // MplsStatic::Vrfs::Vrf::Afs


                std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::Afs> afs;
                std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf::LabelSwitchedPaths> label_switched_paths;


        }; // MplsStatic::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs::Vrf> > vrf;


    }; // MplsStatic::Vrfs


    class Interfaces : public Entity
    {
        public:
            Interfaces();
            ~Interfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Interface : public Entity
        {
            public:
                Interface();
                ~Interface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface_name; //type: string




        }; // MplsStatic::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Interfaces::Interface> > interface;


    }; // MplsStatic::Interfaces


    class DefaultVrf : public Entity
    {
        public:
            DefaultVrf();
            ~DefaultVrf();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value enable; //type: empty


        class LabelSwitchedPaths : public Entity
        {
            public:
                LabelSwitchedPaths();
                ~LabelSwitchedPaths();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class LabelSwitchedPath : public Entity
            {
                public:
                    LabelSwitchedPath();
                    ~LabelSwitchedPath();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value lsp_name; //type: string
                    Value enable; //type: empty


                class InLabel : public Entity
                {
                    public:
                        InLabel();
                        ~InLabel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value in_label_value; //type: uint32
                        Value label_mode; //type: MplsStaticLabelModeEnum
                        Value prefix; //type: string
                        Value prefix_length; //type: int32


                        class MplsStaticLabelModeEnum;


                }; // MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel


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
                            Value path_id; //type: uint32
                            Value path_type; //type: MplsStaticPathEnum
                            Value label_type; //type: MplsStaticOutLabelTypesEnum
                            Value next_hop_label; //type: uint32
                            Value next_hop_address; //type: string
                            Value interface_name; //type: string


                            class MplsStaticOutLabelTypesEnum;
                            class MplsStaticPathEnum;


                    }; // MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths::Path> > path;


                }; // MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths


                    std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::InLabel> in_label;
                    std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath::Paths> paths;


            }; // MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths::LabelSwitchedPath> > label_switched_path;


        }; // MplsStatic::DefaultVrf::LabelSwitchedPaths


        class Afs : public Entity
        {
            public:
                Afs();
                ~Afs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Af : public Entity
            {
                public:
                    Af();
                    ~Af();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value afi; //type: MplsStaticAddressFamilyEnum
                    Value enable; //type: empty


                class TopLabelHash : public Entity
                {
                    public:
                        TopLabelHash();
                        ~TopLabelHash();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class LocalLabels : public Entity
                    {
                        public:
                            LocalLabels();
                            ~LocalLabels();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class LocalLabel : public Entity
                        {
                            public:
                                LocalLabel();
                                ~LocalLabel();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value local_label_id; //type: uint32


                            class LabelType : public Entity
                            {
                                public:
                                    LabelType();
                                    ~LabelType();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value label_mode; //type: MplsStaticLabelModeEnum
                                    Value prefix; //type: string
                                    Value prefix_length; //type: int32


                                    class MplsStaticLabelModeEnum;


                            }; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType


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
                                        Value path_id; //type: uint32
                                        Value path_type; //type: MplsStaticPathEnum
                                        Value label_type; //type: MplsStaticOutLabelTypesEnum
                                        Value next_hop_label; //type: uint32
                                        Value next_hop_address; //type: string
                                        Value interface_name; //type: string


                                        class MplsStaticOutLabelTypesEnum;
                                        class MplsStaticPathEnum;


                                }; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths::Path> > path;


                            }; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths


                                std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::LabelType> label_type;
                                std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel::Paths> paths;


                        }; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels::LocalLabel> > local_label;


                    }; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels


                        std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash::LocalLabels> local_labels;


                }; // MplsStatic::DefaultVrf::Afs::Af::TopLabelHash


                class LocalLabels : public Entity
                {
                    public:
                        LocalLabels();
                        ~LocalLabels();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class LocalLabel : public Entity
                    {
                        public:
                            LocalLabel();
                            ~LocalLabel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value local_label_id; //type: uint32


                        class LabelType : public Entity
                        {
                            public:
                                LabelType();
                                ~LabelType();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value label_mode; //type: MplsStaticLabelModeEnum
                                Value prefix; //type: string
                                Value prefix_length; //type: int32


                                class MplsStaticLabelModeEnum;


                        }; // MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType


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
                                    Value path_id; //type: uint32
                                    Value path_type; //type: MplsStaticPathEnum
                                    Value label_type; //type: MplsStaticOutLabelTypesEnum
                                    Value next_hop_label; //type: uint32
                                    Value next_hop_address; //type: string
                                    Value interface_name; //type: string


                                    class MplsStaticOutLabelTypesEnum;
                                    class MplsStaticPathEnum;


                            }; // MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path


                                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths::Path> > path;


                        }; // MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths


                            std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::LabelType> label_type;
                            std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel::Paths> paths;


                    }; // MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::LocalLabels::LocalLabel> > local_label;


                }; // MplsStatic::DefaultVrf::Afs::Af::LocalLabels


                    std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::LocalLabels> local_labels;
                    std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af::TopLabelHash> top_label_hash;
                    class MplsStaticAddressFamilyEnum;


            }; // MplsStatic::DefaultVrf::Afs::Af


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs::Af> > af;


        }; // MplsStatic::DefaultVrf::Afs


            std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::Afs> afs;
            std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf::LabelSwitchedPaths> label_switched_paths;


    }; // MplsStatic::DefaultVrf


        std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::DefaultVrf> default_vrf;
        std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_mpls_static_cfg::MplsStatic::Vrfs> vrfs;


}; // MplsStatic


class MplsStaticOutLabelTypesEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value out_label;
        static const Enum::Value pop;
        static const Enum::Value exp_null;

};

class MplsStaticLabelModeEnum : public Enum
{
    public:
        static const Enum::Value per_vrf;
        static const Enum::Value per_prefix;
        static const Enum::Value lsp;

};

class MplsStaticPathEnum : public Enum
{
    public:
        static const Enum::Value pop_and_lookup;
        static const Enum::Value cross_connect;

};

class MplsStaticAddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value ipv4_unicast;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_STATIC_CFG_ */

